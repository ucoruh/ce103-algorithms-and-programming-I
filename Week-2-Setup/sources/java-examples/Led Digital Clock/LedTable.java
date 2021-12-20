//LED Table
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class LedTable extends JPanel{
  private Image leds;  
  private Image emptyClock;  
  public static final boolean OFF = false;
  public static final boolean ON = true;
  public static final int YELLOW = 0;
  public static final int RED = 2;
  public static final int GREEN = 4;
  public static final int BLUE = 6;
  public static final int WHITE = 8;
  public static int clockWidth; //Width of the clock
  public static int clockHeight; //Height of the clock
  public static int ledWidth; //Width of the led image
  public static int ledHeight; //Height of the led image
  private int ledsPerWidth=10;
  private int ledsPerHeight=10;
  private int ledsPerWidthToBeShowed=10;
  private int ledsPerHeightToBeShowed=10;
  public boolean ledTableStateArray[][];
  public int ledTableColorArray[][];
  public int ledColor;
  
  public LedTable(int ledsPerWidth,int ledsPerHeight){
    this.ledsPerWidth = ledsPerWidth;
    this.ledsPerHeight = ledsPerHeight;
    InitLedTable();
  }
  public LedTable(int ledsPerWidth,int ledsPerHeight,int ledsPerWidthToBeShowed,int ledsPerHeightToBeShowed){
    this.ledsPerWidth = ledsPerWidth;
    this.ledsPerHeight = ledsPerHeight;
    this.ledsPerWidthToBeShowed = ledsPerWidthToBeShowed;
    this.ledsPerHeightToBeShowed = ledsPerHeightToBeShowed;
    InitLedTable();
  }
  public LedTable(int ledsPerWidth,int ledsPerHeight,int ledsPerWidthToBeShowed,int ledsPerHeightToBeShowed,int ledColor){
    this.ledsPerWidth = ledsPerWidth;
    this.ledsPerHeight = ledsPerHeight;
    this.ledsPerWidthToBeShowed = ledsPerWidthToBeShowed;
    this.ledsPerHeightToBeShowed = ledsPerHeightToBeShowed;
    InitLedTable();
    setLedColor(ledColor);
  }
  private void InitLedTable(){
    if (ledsPerWidthToBeShowed > ledsPerWidth) ledsPerWidthToBeShowed = ledsPerWidth;
    if (ledsPerHeightToBeShowed > ledsPerHeight) ledsPerHeightToBeShowed = ledsPerHeight;
    ledTableStateArray = new boolean[ledsPerWidth][ledsPerHeight];
    ledTableColorArray = new int[ledsPerWidth][ledsPerHeight];
    setLedColor(YELLOW);
    emptyClock = new ImageIcon(EmptyClockImage.emptyClock).getImage(); 
    clockWidth = emptyClock.getWidth(this);
    clockHeight = emptyClock.getHeight(this);
    leds = new ImageIcon(LedImage.leds).getImage(); 
    ledWidth = leds.getWidth(this)/10;
    ledHeight = leds.getHeight(this);
    setPreferredSize(new Dimension(clockWidth,clockHeight));
    setOpaque(false);
    setCursor(Cursor.getPredefinedCursor(Cursor.HAND_CURSOR));
  }
  public void paintComponent(Graphics g){
    super.paintComponent(g);  
    drawLedTable(g);
  }
  private void drawLedTable(Graphics g){
    g.drawImage(emptyClock,0,0,this);
    for (int i=0;i<ledsPerWidth;i++){
      for (int j=0;j<ledsPerHeight;j++){
        g.drawImage(leds,
                     30+i*ledWidth,30+j*ledHeight,
                     30+i*ledWidth+ledWidth,30+j*ledHeight+ledHeight,
                     ((ledTableColorArray[i][j]+((ledTableStateArray[i][j]==OFF)?0:1))*ledWidth),0,
                     ((ledTableColorArray[i][j]+((ledTableStateArray[i][j]==OFF)?0:1))*ledWidth)+ledWidth,ledHeight,
                     this
        );        
      }
    }
  }
  public void setLedColor(int ledColor){
    this.ledColor = ledColor;
    for (int i=0;i<ledsPerWidth;i++){
      for (int j=0;j<ledsPerHeight;j++){
        ledTableColorArray[i][j]=ledColor;
      }
    }
    updateClock();
  }
  public void updateClock(){
    if (getParent() != null) getParent().repaint();          
    repaint();  
  }
}