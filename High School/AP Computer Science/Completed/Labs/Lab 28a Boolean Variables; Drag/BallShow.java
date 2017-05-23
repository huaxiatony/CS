import objectdraw.*;
import java.awt.*;

public class BallShow extends WindowController
{
	Ball joe; 
	boolean pressed;
	Location lastpos;
	public void begin()
	{
		joe = new Ball(50,50,canvas);
	}
	public void onMousePress(Location pt)
	{
		if(joe.contains(pt)) 
		{
			pressed = true; lastpos = pt;
		}
	}
	public void onMouseDrag(Location pt)
	{
		if(pressed) 
		{
			double dx = pt.getX() - lastpos.getX(); double dy = pt.getY() - lastpos.getY(); joe.move(dx,dy);
		}
		lastpos = pt;
	}

}