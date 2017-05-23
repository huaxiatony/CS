import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	FramedOval eraser;
	int counter = 0;
	Text x;
	int r;
	int b;
	int g;
	public void begin()
	{
		x = new Text( "" + counter,100,100,canvas);
		x.setFontSize(1);
		
		eraser = new FramedOval(1,1,50,50,canvas);
	}
	public void onMouseClick(Location point)
	{
	if(eraser.contains(point))
		{
			counter = 0; 
		} 
	}
	
	public void onMouseDrag(Location point)
	{
		
		r=(int)(Math.random()*255);
		b=(int)(Math.random()*255);
		g=(int)(Math.random()*255);
		Color ben = new Color(r,b,g);
		
		x.setText( "" + counter);
		x.setFontSize(counter++);
		x.setColor(ben);
		
	}
}