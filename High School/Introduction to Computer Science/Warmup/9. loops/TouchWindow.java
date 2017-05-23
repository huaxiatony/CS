import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	FilledOval sky;
	int r;
	int b;
	int g;
	Color ben;
	
	public void begin()
	{
		for(int counter = 0; counter <10; counter++)
		{
			r =(int)(Math.random()*255);
			b =(int)(Math.random()*255);
			g =(int)(Math.random()*255);
			
			ben = new Color(r, b, g);
			
			sky = new FilledOval(Math.random()*300,Math.random()*300,Math.random()*300,Math.random()*300,canvas);
			sky.setColor(ben);
		}
	}
}