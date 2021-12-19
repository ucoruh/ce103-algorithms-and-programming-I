import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class LedClockWindow extends JFrame{
  private Container container = getContentPane();  
  private LedClockPanel ledClockPanel = new LedClockPanel();
  public static int setCoordinateX;
  public static int setCoordinateY;
  private WindowLocationUpdate windowLocationUpdate = new WindowLocationUpdate();
  public static boolean windowMustBeShown;
  public static boolean windowMustMinimized;
  private Image ledClockIcon;  
  
  private class WindowLocationUpdate extends Thread{
    public void run(){
      while(true){  
        setLocation(setCoordinateX,setCoordinateY);
        if (windowMustBeShown == true){
          show();
          windowMustBeShown = false;
        }
        if (windowMustMinimized == true){
          setState(JFrame.ICONIFIED);
          windowMustMinimized = false;
        }
        try{Thread.sleep(10);} catch(InterruptedException e){}
      }
    }   
  }
  
  public LedClockWindow(String windowTitle){
    super(windowTitle);  
    ledClockIcon = new ImageIcon(LedClockIcon.ledClockIcon).getImage();
    setIconImage(ledClockIcon);
    setUndecorated(true);
    container.add(ledClockPanel,BorderLayout.CENTER);
    pack();
    windowLocationUpdate.start();
  }
}