import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	FilledRect sky;
	int r;
	int b;
	int g;
	Color ben;
	
	public void begin()
	{
		ben = new Color(r, b, g);
		
		
		sky = new FilledRect(Math.random()*300,Math.random()*300,Math.random()*300,Math.random()*300,canvas);
		sky.setColor(Color.blue);
	}
	public void onMouseClick(Location point)
	{
		sky = new FilledRect(Math.random()*300,Math.random()*300,Math.random()*300,Math.random()*300,canvas);
		sky.setColor(Color.blue);
		
		r =(int)(Math.random()*255);
		b =(int)(Math.random()*255);
		g =(int)(Math.random()*255);
		ben = new Color(r, b, g);
		sky.setColor(ben);
	}
	public void onMouseRelease(Location point)
	{
	
	}
}