import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	FilledOval sun;
	FilledRect land;
	Line a;
	Line b;
	Line c;
	Line d;
	public void begin()
	{
		sun = new FilledOval(450,250,100,100,canvas);
		sun.setColor(Color.yellow);
		
		land = new FilledRect(0,300,1000,1000,canvas);
		land.setColor(Color.green);
		
		a = new Line(0,100,100,0,canvas);
		b = new Line(0,100,100,200,canvas);
		c = new Line(200,100,100,0,canvas);
		d = new Line(200,100,100,200,canvas); 
		
	}
	public void onMouseClick(Location pt)
	{
		sun.move(0,-10);
		a.move(-10,-10);
		b.move(-10,10);
		c.move(10,-10);
		d.move(10,10);
	}

}