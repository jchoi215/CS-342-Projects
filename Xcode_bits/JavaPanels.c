/**
* CS342 HW01 Sample code 01/06/2017
* Steve Huang
* Silly example of creating a canvas, drawing a rectangle on mouse click, 
* setting up a timer, and setting up a GUI button.
* Not to be used or referenced as an example of clean code.
*/
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Point;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.util.Timer;
import java.util.TimerTask;
import javax.swing.*;



public class CS342demo extends JFrame implements ActionListener
{

  static JButton  closeButton = null;
  static JPanel mjp = null;
  static Graphics gg = null;
  private MyCanvas canvas = null;

  public static void main(String[] args)
  {
    CS342demo dm = new CS342demo();
    Timer tt = new Timer();
    tt.schedule(new TimerTask() 
    { 
      @Override public void run() 
      {
        System.out.println("Benign timer at your service");
      }
    }, 0,1000);
}

public CS342demo() 
{
  // this is creating a button to be add but NOT added into the scene YET
  closeButton = new JButton("close");
  closeButton.addActionListener(this);   // this adds the functionality of clicking, but this falls into the score of this world;


  mjp = new JPanel();               // this creates the scene where the world resides in
  mjp.add(closeButton);             // this fills adds the  BUTTON object to the scene
  mjp.setBackground(Color.black);   // this fills in the back ground color
  mjp.setBounds(0, 0, 400, 300);    // this limits the boundary of the size of the map
  mjp.setSize(400,300);             // this sets the size of the window of the screen


  this.setTitle("Hello CS342");       // add title to the SCREEN WINDOW AREA
  this.setSize(400, 300);             // 
  this.getContentPane().setBackground(Color.BLACK);
  //this.getContentPane().add(closeButton);
  this.add(mjp);
  this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  this.setVisible(true);
  this.setResizable(false);

  canvas = new MyCanvas();
  this.add(canvas);
}


@Override public void actionPerformed(ActionEvent e) 
{
  // TODO Auto-generated method stub
  if(e.getActionCommand() == "close"){
  System.exit(0);  
}


}

}

class MyCanvas extends JPanel implements MouseListener{

private int x,y;

public MyCanvas() {
// TODO Auto-generated constructor stub
this.addMouseListener(this);
this.setBackground(Color.black);
this.setSize(400,300);
x = 0;
y = 0;

}

@Override
public void mouseClicked(MouseEvent e) {
System.out.println("mouse clicked.");
// TODO Auto-generated method stub
Graphics gg = getGraphics();
gg.setColor(Color.black);
gg.fillRect(x-15, y-10, 30, 20);
gg.setColor(Color.blue);
x = e.getX();
y = e.getY();
gg.fillRect(x-15, y-10, 30, 20);
}

@Override
public void mousePressed(MouseEvent e) {
// TODO Auto-generated method stub
System.out.println("mouse pressed.");
}

@Override
public void mouseReleased(MouseEvent e) {
// TODO Auto-generated method stub
System.out.println("mouse released.");
}

@Override
public void mouseEntered(MouseEvent e) {
// TODO Auto-generated method stub
System.out.println("Just checking what this actually do...");

}

@Override
public void mouseExited(MouseEvent e) {
// TODO Auto-generated method stub

}

}]]