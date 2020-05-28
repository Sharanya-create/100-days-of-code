// Program to handle Keyboard events
/* Three methods from KeyListener interface: keyPressed(), keyReleased() and keyTyped() 
 */

import java.awt.*;
import java.applet.*;
import java.awt.event.*;

// Include the Applet code
/*<Applet code="Pgm2" width=500 height=300> </applet>*/

public class Pgm2 extends Applet implements KeyListener
{
	String msg="";
	
	public void init()
	{
		addKeyListener(this);
		requestFocus();
	}
	
	public void keyPressed(KeyEvent k)
	{
		showStatus("Key Pressed");
	}
	
	public void keyReleased(KeyEvent k)
	{
		showStatus("Key Released");
	}
	
	public void keyTyped(KeyEvent k)
	{
		Font f;
		f = new Font("Arial",Font.ITALIC,30);
		msg+=k.getKeyChar();
		setFont(f);
		repaint();
	}
	
	public void paint(Graphics g)
	{
		g.drawString(msg, 30, 70);
	}
}
