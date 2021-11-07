import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import java.io.*;

public class MagnifierWindow extends JFrame{
  private Container container = getContentPane();  
  private JPopupMenu popupMenu = new JPopupMenu();  
  private JMenuItem menuRefresh = new JMenuItem("Refresh");
  private JMenuItem menuHide = new JMenuItem("Hide");
  private JMenu menuSize = new JMenu("Size");
  private JMenuItem menu100Pixels = new JMenuItem("100 Pixels");
  private JMenuItem menu200Pixels = new JMenuItem("200 Pixels");
  private JMenu menuHelp = new JMenu("Help");
  private JMenuItem menuHow = new JMenuItem("How to use");
  private JMenuItem menuSite = new JMenuItem("Visit web site");
  private JMenuItem menuAbout = new JMenuItem("About");
  private JMenuItem menuExit = new JMenuItem("Exit");
  
  private TimeUpdate timeUpdate = new TimeUpdate();
  private int timeUpdateDelay = 10;
  private int onScreenMoveDidectionUp = 1;
  private int onScreenMoveDidectionDown = -1;
  private int onScreenMoveDidectionX = onScreenMoveDidectionUp;
  private int onScreenMoveDidectionY = onScreenMoveDidectionUp;
  
  private int setCoordinateX; 
  private int setCoordinateY;
  private int absoluteCoordinateX;
  private int absoluteCoordinateY;
  private int relativeCoordinateXWhenMousePressed;
  private int relativeCoordinateYWhenMousePressed;
  private boolean mousePressedNow;
  private boolean magnifierStopped;
  
  private ConfigData configData = new ConfigData();
  
  private int screenWidth = Toolkit.getDefaultToolkit().getScreenSize().width;
  private int screenHeight = Toolkit.getDefaultToolkit().getScreenSize().height;
  private int magnifierSize = 100;

  private MagnifierPanel magnifierPanel = new MagnifierPanel(magnifierSize);
  private Image magnifierIcon;
  
  private int updateScreenDelay = 500;

  public MagnifierWindow(String windowTitle){
    super(windowTitle);  
    magnifierIcon = new ImageIcon(MagnifierIcon.magnifierIcon).getImage();
    setIconImage(magnifierIcon);
    setUndecorated(true);
    
    container.add(magnifierPanel);  
    addMouseListener(new MouseFunctions());
    addMouseMotionListener(new MouseMotionFunctions());
    timeUpdate.start();
    menuRefresh.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          updateScreen();
        }
      }
    );
    menuHide.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          setState(JFrame.ICONIFIED);
        }
      }
    );
    menu100Pixels.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          magnifierSize = 100;  
          updateSize(magnifierSize);
        }
      }
    );
    menu200Pixels.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          magnifierSize = 200;  
          updateSize(magnifierSize);
        }
      }
    );
    menuHow.addActionListener(
      new ActionListener(){
        public void actionPerformed(ActionEvent e){
          JOptionPane jOptionPane = new JOptionPane();
          JTextArea jTextArea = new JTextArea();
          jTextArea.setText("1.Single click on left mouse button stops magnifier movement.\n" +
                             "2.Double click on left mouse button starts magnifier movement.\n" +
                             "3.Single click on right mouse button stops magnifier movement and shows menu.\n" +
                             "4.Move magnifier by click on left mouse button on it and drag to desired place.\n" +
                             "5.Refresh option in the menu is needed to update last screen status.\n" +
                             "6.Hide option in the menu is needed to minimize magnifier");
          jOptionPane.showMessageDialog(null,
                                          jTextArea,
                                          "How to use magnifier",
                                          JOptionPane.INFORMATION_MESSAGE);
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
          JOptionPane.showMessageDialog(null,"Magnifier v1.14","About",JOptionPane.INFORMATION_MESSAGE);
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
    popupMenu.add(menuRefresh);
    popupMenu.add(menuHide);
    popupMenu.add(menuSize);
    menuSize.add(menu100Pixels);
    menuSize.add(menu200Pixels);
    popupMenu.add(menuHelp);
    menuHelp.add(menuHow);
    menuHelp.add(menuSite);
    menuHelp.add(menuAbout);
    popupMenu.add(menuExit);
    
    updateSize(magnifierSize);
    openFile();
    show();
  }
  
  public void updateSize(int magnifierSize){
    magnifierPanel.setMagnifierSize(magnifierSize);
    setSize(magnifierSize,magnifierSize);
    validate();
  }

  public void updateScreen(){
    hide();  
    try{Thread.sleep(updateScreenDelay);} catch(InterruptedException e){}
    magnifierPanel.getScreen();  
    show();
  } 
  
  private class TimeUpdate extends Thread{
    public void run(){
      while(true){ 
        if (magnifierStopped == false){  
          setCoordinateX += onScreenMoveDidectionX;
          setCoordinateY += onScreenMoveDidectionY;
          if (setCoordinateX < 0) onScreenMoveDidectionX = onScreenMoveDidectionUp; 
          if (setCoordinateY < 0) onScreenMoveDidectionY = onScreenMoveDidectionUp; 
          if (setCoordinateX > (screenWidth-magnifierSize)) onScreenMoveDidectionX = onScreenMoveDidectionDown; 
          if (setCoordinateY > (screenHeight-magnifierSize)) onScreenMoveDidectionY = onScreenMoveDidectionDown; 
          magnifierPanel.setMagnifierLocation(setCoordinateX,setCoordinateY);
          setLocation(setCoordinateX,setCoordinateY);
        }
        try{Thread.sleep(timeUpdateDelay);} catch(InterruptedException e){}
      }
    }   
  }

  
  private class MouseFunctions extends MouseAdapter{
    public void mousePressed(MouseEvent e){
      if (e.getClickCount()==1){
        mousePressedNow = true;  
        relativeCoordinateXWhenMousePressed=e.getX();
        relativeCoordinateYWhenMousePressed=e.getY();
        magnifierStopped = true;
      }
      if (e.getButton()==MouseEvent.BUTTON1&&e.getClickCount()==2){
        magnifierStopped = false;
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
        absoluteCoordinateX = MagnifierWindow.this.getLocationOnScreen().x + e.getX();
        absoluteCoordinateY = MagnifierWindow.this.getLocationOnScreen().y + e.getY();
        setCoordinateX = absoluteCoordinateX-relativeCoordinateXWhenMousePressed;
        setCoordinateY = absoluteCoordinateY-relativeCoordinateYWhenMousePressed;
        magnifierPanel.setMagnifierLocation(setCoordinateX,setCoordinateY);
        setLocation(setCoordinateX,setCoordinateY);
      }
    }
  }
  
  public void saveFile(){
    ObjectOutputStream out;
    configData.magnifierXCoordinate = getLocation().x;
    configData.magnifierYCoordinate = getLocation().y;
    configData.magnifierSizeInPixels = magnifierSize;
    try{  
      out = new ObjectOutputStream(new FileOutputStream("Magnifier.cfg"));
      out.writeObject(configData);
      out.flush();
      out.close();
    }
    catch(IOException e){}
  }
  
  public void openFile(){
    ObjectInputStream in;
    try{  
      in = new ObjectInputStream(new FileInputStream("Magnifier.cfg"));
      try{  
        configData = (ConfigData)in.readObject();
        setCoordinateX = configData.magnifierXCoordinate;
        setCoordinateY = configData.magnifierYCoordinate;
        magnifierSize = configData.magnifierSizeInPixels;
        updateSize(magnifierSize);
      }
      catch(ClassNotFoundException e){}
      catch(IOException e){}
      in.close();
    }
    catch(IOException e){}
  }  
}

class ConfigData implements Serializable{
  public int magnifierXCoordinate;  
  public int magnifierYCoordinate;  
  public int magnifierSizeInPixels;  
}