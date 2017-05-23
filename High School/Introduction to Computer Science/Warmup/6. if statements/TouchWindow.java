import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	FilledRect joe;
	int r;
	int b;
	int g;
	Color ben;
	int counter = 0;
	public void begin()
	{
		Color ben = new Color(r,b,g);
		
		joe = new FilledRect(0,10,200,300,canvas);
		
		r =(int)(Math.random()*255);
		b =(int)(Math.random()*255);
		g =(int)(Math.random()*255);
		
		ben = new Color(r, b, g);
		
		joe.setColor(ben);
		counter = 0;
	}
	public void onMouseClick(Location point)
	{
		counter = counter +1;
		// counter++;
	
		if(counter >=12)
		{
			r =(int)(Math.random()*255);
			b =(int)(Math.random()*255);
			g =(int)(Math.random()*255);
			ben = new Color(r, b, g);
		joe.setColor(ben);
		}
	
	
	}
}