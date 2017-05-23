import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
		Text bob;
		int r;
		int b;
		int g; 
		Color ben;
		FilledRect joe;
	public void begin()
	{
		ben = new Color(r, b, g);
		joe = new FilledRect(1,1,canvas.getWidth(),canvas.getHeight(),canvas);
		joe.setColor(ben);
		
		bob = new Text (r + ", " + b + ", " + g, 1,1,canvas);
		bob.setBold();
		bob.setItalic();
		bob.setColor(Color.white);
		bob.setFontSize(20);
		
		
		
	}
	public void onMouseClick(Location point)
	{
		r =(int)(Math.random()*255);
		b =(int)(Math.random()*255);
		g =(int)(Math.random()*255);
		ben = new Color(r, b, g);
		joe.setColor(ben);
		
		bob.setText(r + ", " + b + ", " + g);
	}
}