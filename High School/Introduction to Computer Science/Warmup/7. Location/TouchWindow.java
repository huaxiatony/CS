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
	FilledRect button;
	public void begin()
	{
		Color ben = new Color(r,b,g);
		
		
		button = new FilledRect(250,250,50,50,canvas);
		button.setColor(Color.red);
		r =(int)(Math.random()*256);
		b =(int)(Math.random()*256);
		g =(int)(Math.random()*256);
		
		ben = new Color(r, b, g);
		
		joe = new FilledRect(0,10,200,300,canvas);
		joe.setColor(ben);
		counter = 0;
	}
	public void onMouseClick(Location point)
	{
		counter = counter +1;
		// counter++;
	
		//if(counter >6)
		if(button.contains(point))
		{
			r =(int)(Math.random()*255);
			b =(int)(Math.random()*255);
			g =(int)(Math.random()*255);
			//FilledOval tom= new FilledOval(point.getX(),point.getY(),20,20,canvas);
			FilledOval tom= new FilledOval(point,20,20,canvas);
			
			ben = new Color(r, b, g);
		joe.setColor(ben);
		}
	
	
	}
}