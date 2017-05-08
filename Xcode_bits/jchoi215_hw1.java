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

public class Jchoi215_hw1 extends JFrame implements ActionListener
{
	static JButton exit_Button   = null;
	static JButton create_Button = null;
	static JButton delete_Button = null;
	static JPanel  controlPanel  = null;
	static Jslider sizeControl   = null;
	private MyCanvas canvas = null;


	public static void main(String[] args)
	{	
		Timer timeFlow = new Timer();
		ViewScreen screenSetUp = new ViewScreen();	
	}

}


public ViewScreen()
{
	// add buttons and functions
	exit_Button = new JButton("exit");
	exit_Button.addActionListener(this);
	
	create_Button = new JButton("create");
	create_Button.addActionListener(this);
	
	delete_Button = new JButton("delete");
	delete_Button.addActionListener(this);

	controlPanel = new JPanel();
	controlPanel.setBackground(Color.BLACK);
	controlPanel.setBounds(0,0, 1000, 1000);
	// controlPanel.setSiz

	controlPanel.add(exit_Button);
	controlPanel.add(create_Button);
	controlPanel.add(delete_Button);

	this.setTitle("Learning to create java window");
	this.setSize(1000, 1000);
	this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	this.setVisible(true);
}