import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	FramedRect erase;
	Text a;
	Text b;
	Line main;
	int counter = 0;
	public void begin()
	{
		erase = new FramedRect(1,1,50,50,canvas);
		
	}
	public void onMousePress(Location point)
	{
		if(erase.contains(point))
		{
			canvas.clear();
			erase = new FramedRect(1,1,50,50,canvas);
		}
		counter++;

		a = new Text( "Start", point.getX(), point.getY(), canvas);
		
		if(counter%2==0)
		{
			main = new Line(a.getX(),a.getY(),b.getX(),b.getY(),canvas);
		}
		
		if(counter%3==0)
		{
			b = new Text( "End",point.getX(),point.getY(), canvas);
			a.hide();
		}
	}
}