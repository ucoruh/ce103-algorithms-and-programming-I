import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import java.util.*;
import java.text.*;
import java.io.*;

public class LedClockPanel extends JPanel{
  private SimpleDateFormat formatter = new SimpleDateFormat();
  private Date currentDate;
  private LedTable ledTable = new LedTable(49,9,49,9,LedTable.YELLOW);  
  private javax.swing.Timer timer;
  private int hour;
  private int minute;
  private int second;
  private int day;
  private int month;
  private int year;
  private int secondTemp;
  private JPopupMenu popupMenu = new JPopupMenu();  
  private JMenu menuColor = new JMenu("Color");
  private JMenuItem menuYellow = new JMenuItem("Yellow");
  private JMenuItem menuRed = new JMenuItem("Red");
  private JMenuItem menuGreen = new JMenuItem("Green");
  private JMenuItem menuBlue = new JMenuItem("Blue");
  private JMenuItem menuWhite = new JMenuItem("White");
  private JMenu menuHelp = new JMenu("Help");
  private JMenuItem menuSite = new JMenuItem("Visit web site");
  private JMenuItem menuAbout = new JMenuItem("About");
  private JMenuItem menuHide = new JMenuItem("Hide");  
  private JMenuItem menuExit = new JMenuItem("Exit");
  private TimeUpdate timeUpdate = new TimeUpdate();
  private int absoluteCoordinateX;
  private int absoluteCoordinateY;
  private int relativeCoordinateXWhenMousePressed;
  private int relativeCoordinateYWhenMousePressed;
  private boolean mousePressedNow;
  private ConfigData configData = new ConfigData();
  
  private class TimeUpdate extends Thread{
    public void run(){
      while(true){  
        drawTime();
        try{Thread.sleep(10);} catch(InterruptedException e){}
      }
    }   
  }
  
  public LedClockPanel(){
    setLayout(new BorderLayout());
    add(ledTable,BorderLayout.CENTER);
    addMouseListener(new MouseFunctions());
    addMouseMotionListener(new MouseMotionFunctions());
    timeUpdate.start();
    menuYellow.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          ledTable.setLedColor(LedTable.YELLOW);
          saveFile();
        }
      }
    );
    menuRed.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          ledTable.setLedColor(LedTable.RED);
          saveFile();
        }
      }
    );
    menuGreen.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          ledTable.setLedColor(LedTable.GREEN);
          saveFile();
        }
      }
    );
    menuBlue.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          ledTable.setLedColor(LedTable.BLUE);
          saveFile();
        }
      }
    );
    menuWhite.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          ledTable.setLedColor(LedTable.WHITE);
          saveFile();
        }
      }
    );
    menuSite.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          JOptionPane jOptionPane = new JOptionPane();
          JTextField jTextField = new JTextField();
          jTextField.setText("http://softcollection.sytes.net/javaprog");
          jOptionPane.showMessageDialog(null,
                                          jTextField,
                                          "Please visit web site!",
                                          JOptionPane.INFORMATION_MESSAGE);
        }
      }
    );
    menuAbout.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          JOptionPane.showMessageDialog(null,"Led Digital Clock v1.15","About",JOptionPane.INFORMATION_MESSAGE);
        }
      }
    );
    menuHide.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          LedClockWindow.windowMustMinimized = true;
        }
      }
    );
    menuExit.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          System.exit(0);  
        }
      }
    );
    popupMenu.add(menuColor);
    menuColor.add(menuYellow);
    menuColor.add(menuRed);
    menuColor.add(menuGreen);
    menuColor.add(menuBlue);
    menuColor.add(menuWhite);
    popupMenu.add(menuHelp);
    menuHelp.add(menuSite);
    menuHelp.add(menuAbout);
    popupMenu.add(menuHide);
    popupMenu.add(menuExit);
    openFile();
    LedClockWindow.windowMustBeShown = true;
  }

  public void drawTime(){
    currentDate = new Date();
    formatter.applyPattern("HH");
    hour=Integer.parseInt(formatter.format(currentDate).toString());
    formatter.applyPattern("mm");
    minute=Integer.parseInt(formatter.format(currentDate).toString());
    formatter.applyPattern("ss");
    second=Integer.parseInt(formatter.format(currentDate).toString());
    formatter.applyPattern("dd");
    day=Integer.parseInt(formatter.format(currentDate).toString());
    formatter.applyPattern("MM");
    month=Integer.parseInt(formatter.format(currentDate).toString());
    formatter.applyPattern("yyyy");
    year=Integer.parseInt(formatter.format(currentDate).toString());
    if (secondTemp != second){
      setLetter(0,hour/10+16);
      setLetter(1,hour%10+16);
      setLetter(2,26);
      setLetter(3,minute/10+16);
      setLetter(4,minute%10+16);
      setLetter(5,26);
      setLetter(6,second/10+16);
      setLetter(7,second%10+16);
      /*
      drawDigit(6,day/10);
      drawDigit(7,day%10);
      drawDigit(8,month/10);
      drawDigit(9,month%10);
      drawDigit(10,year/1000);
      drawDigit(11,year/100%10);
      drawDigit(12,year/10%10);
      drawDigit(13,year%10);
      */
      ledTable.updateClock();
      secondTemp = second;
    }
  }
  
  public void setLetter(int numberOfLetter,int codeOfLetter){
    for (int i=0;i<5;i++){
      for (int j=0;j<8;j++){
        ledTable.ledTableStateArray[numberOfLetter*6+i+1][j+1]=Font.fontArray[codeOfLetter*5+i][j]; 
      } 
    }
  }
  
  private class MouseFunctions extends MouseAdapter{
    public void mousePressed(MouseEvent e){
      if (e.getButton()==MouseEvent.BUTTON1&&e.getClickCount()==1){
        mousePressedNow = true;  
        relativeCoordinateXWhenMousePressed=e.getX();
        relativeCoordinateYWhenMousePressed=e.getY();
      }
    }
    public void mouseReleased(MouseEvent e){
      mousePressedNow = false;    
      saveFile();
      if (e.isPopupTrigger()){
        popupMenu.show(e.getComponent(),e.getX(),e.getY());            
      }
    }
  }

  private class MouseMotionFunctions extends MouseMotionAdapter{
    public void mouseDragged(MouseEvent e){
      if (mousePressedNow == true){  
        absoluteCoordinateX = LedClockPanel.this.getLocationOnScreen().x + e.getX();
        absoluteCoordinateY = LedClockPanel.this.getLocationOnScreen().y + e.getY();
        LedClockWindow.setCoordinateX = absoluteCoordinateX-relativeCoordinateXWhenMousePressed;
        LedClockWindow.setCoordinateY = absoluteCoordinateY-relativeCoordinateYWhenMousePressed;
      }
    }
  }
  
  public void saveFile(){
    ObjectOutputStream out;
    configData.clockXCoordinate = getLocationOnScreen().x;
    configData.clockYCoordinate = getLocationOnScreen().y;
    configData.clockLedColor = ledTable.ledColor;
    try{  
      out = new ObjectOutputStream(new FileOutputStream("LedClock.cfg"));
      out.writeObject(configData);
      out.flush();
      out.close();
    }
    catch(IOException e){}
  }
  
  public void openFile(){
    ObjectInputStream in;
    try{  
      in = new ObjectInputStream(new FileInputStream("LedClock.cfg"));
      try{  
        configData = (ConfigData)in.readObject();
        LedClockWindow.setCoordinateX = configData.clockXCoordinate;
        LedClockWindow.setCoordinateY = configData.clockYCoordinate;
        ledTable.setLedColor(configData.clockLedColor);
      }
      catch(ClassNotFoundException e){}
      catch(IOException e){}
      in.close();
    }
    catch(IOException e){}
  }  
}

class ConfigData implements Serializable{
  public int clockXCoordinate;  
  public int clockYCoordinate;  
  public int clockLedColor;  
}
