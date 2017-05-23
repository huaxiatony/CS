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
		
	}
	public void onMouseClick(Location point)
	{
	for(int counter = 0; counter <1000; counter++)
		{
			r =(int)(Math.random()*255);
			b =(int)(Math.random()*255);
			g =(int)(Math.random()*255);
			
			ben = new Color(r, b, g);
			
			sky = new FilledOval(Math.random()*1000,Math.random()*1000,7,7,canvas);
			sky.setColor(ben);
		}
	}
}