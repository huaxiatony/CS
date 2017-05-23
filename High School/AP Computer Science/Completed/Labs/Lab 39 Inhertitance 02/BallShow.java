import objectdraw.*;
import java.awt.*;

public class BallShow extends WindowController
{
	Ball joe; 
	Arrow bob; 
	boolean pressed; boolean pressed2; 
	Location lastpos; Location lastpos2; 
	public void begin()
	{
		bob = new Arrow(50,50,canvas); Arrow.setColor(Color.blue); 
		joe = new Ball(100,100,canvas);
	}
	public void onMousePress(Location pt)
	{
		pressed = false; 
		if(bob.contains(pt)) 
		{
			pressed = true; lastpos = pt;
		}
		if(joe.contains(pt))
		{
			pressed2 = true; lastpos2 = pt; 
		}
	}
	public void onMouseDrag(Location pt)
	{
		if(pressed) 
		{
			double dx = pt.getX() - lastpos.getX(); double dy = pt.getY() - lastpos.getY(); bob.move(dx,dy);
		}
		if(pressed2)
		{
			double dx = pt.getX() - lastpos2.getX(); double dy = pt.getY() - lastpos2.getY(); joe.move(dx,dy);
		}
		lastpos = pt; lastpos2 = pt; 
	}
	

}