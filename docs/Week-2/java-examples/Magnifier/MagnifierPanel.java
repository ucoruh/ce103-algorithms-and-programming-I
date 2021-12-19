import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import java.awt.geom.*;

public class MagnifierPanel extends JPanel{
  private Image screenImage;
  private int magnifierSize;
  private int locationX;
  private int locationY;
  private Area circle1;
  private Area circle2;
  private Area circle3;
  private Area circle4;
  private Area circle5;
  private Area rectangle1;
  private Color brightGlassColor;  
  private Color darkGlassColor;  
  private Color lightInGlassColor;
  private Robot robot;
  
  public MagnifierPanel(int magnifierSize){
    try{robot = new Robot();} catch(AWTException e){}       
    getScreen();
    setMagnifierSize(magnifierSize);
  }
  
  public void setMagnifierLocation(int locationX,int locationY){
    this.locationX = locationX;
    this.locationY = locationY;
    updateMagnifierPicture();
  }

  public void setImage(Image screenImage){
    this.screenImage = screenImage;
    updateMagnifierPicture();
  }
  
  public void getScreen(){
    screenImage = robot.createScreenCapture(new Rectangle(0,0,Toolkit.getDefaultToolkit().getScreenSize().width,Toolkit.getDefaultToolkit().getScreenSize().height));
  }
  
  public void setMagnifierSize(int magnifierSize){
    this.magnifierSize = magnifierSize;
    circle1 = new Area(new Ellipse2D.Double(0,0,magnifierSize,magnifierSize));
    circle2 = new Area(new Ellipse2D.Double((magnifierSize/5),(magnifierSize/5),(magnifierSize/10*11),(magnifierSize/10*11)));
    circle3 = new Area(new Ellipse2D.Double(0,0,magnifierSize,magnifierSize));
    circle4 = new Area(new Ellipse2D.Double((magnifierSize/5),(magnifierSize/5),(magnifierSize/10*11),(magnifierSize/10*11)));
    circle5 = new Area(new Ellipse2D.Double(0,0,magnifierSize,magnifierSize));
    rectangle1 = new Area(new Rectangle2D.Double(0,0,magnifierSize,magnifierSize));
    rectangle1.subtract(circle5);
    circle1.subtract(circle2);
    circle3.intersect(circle4);
    brightGlassColor = new Color(140,140,140,50);  
    darkGlassColor = new Color(100,100,100,50);  
    lightInGlassColor = new Color(255,255,255,100);
    setPreferredSize(new Dimension(magnifierSize,magnifierSize));
    if (getParent() != null) getParent().repaint();
    updateMagnifierPicture();
  }

  public void updateMagnifierPicture(){
    if (getParent() != null) getParent().repaint();
    else repaint();  
  }
  
  public void paintComponent(Graphics g){
    super.paintComponent((Graphics2D)g);  
    drawScreenRectangle((Graphics2D)g);
  }
  private void drawScreenRectangle(Graphics2D g){
    g.setClip(rectangle1);
    g.drawImage(screenImage,
                 0,
                 0,
                 magnifierSize,
                 magnifierSize,
                 locationX,
                 locationY,
                 locationX+magnifierSize,
                 locationY+magnifierSize,
                 this);
    g.setClip(circle5);
    g.drawImage(screenImage,
                 0,
                 0,
                 magnifierSize,
                 magnifierSize,
                 locationX+(magnifierSize/4),
                 locationY+(magnifierSize/4),
                 locationX+(magnifierSize/4*3),
                 locationY+(magnifierSize/4*3),
                 this);
    g.setColor(darkGlassColor);
    g.fill(circle1);
    g.setColor(brightGlassColor);
    g.fill(circle3);
    g.setColor(lightInGlassColor);
    g.fillOval((magnifierSize/5),(magnifierSize/5),(magnifierSize/10),(magnifierSize/10));
  }
}