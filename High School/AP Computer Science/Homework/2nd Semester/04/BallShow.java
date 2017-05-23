import objectdraw.*;
import java.awt.*;

public class BallShow extends WindowController
{
	Ball tom; Arrow bob; private Dragable[] joe; Dragable[] carl;
	boolean pressed; boolean pressed2; int pass; 
	Location lastpos; Location lastpos2; 
	public void begin()
	{
		carl = new Dragable[5];
		joe = new Dragable[5];
		for(int x=0;x<5;x++)
		{
			joe[x] = new Ball(50,50,canvas);
			carl[x] = new Arrow(100,100,canvas);
		}
		 
	}
	public void onMousePress(Location pt)
	{
		pressed = false; pressed2 = false; 
		// if(bob.contains(pt)) 
		// {
			// pressed = true; lastpos = pt;
		// }
		for(int i = joe.length-1; i>=0;i--)
		{
			if(joe[i].contains(pt))
			{
				pass = i; 
				pressed2 = true; lastpos2 = pt; 
				break;
			}
			if(carl[i].contains(pt))
			{
				pass = i; 
				pressed = true; lastpos = pt; 
				break;
			}
		}
		
		
	}
	public void onMouseDrag(Location pt)
	{
		if(pressed) 
		{
			double dx = pt.getX() - lastpos.getX(); double dy = pt.getY() - lastpos.getY(); carl[pass].move(dx,dy);
		}
		if(pressed2)
		{
			double dx = pt.getX() - lastpos2.getX(); double dy = pt.getY() - lastpos2.getY(); joe[pass].move(dx,dy);
		}
		lastpos = pt; lastpos2 = pt; 
	}
	public void onMouseRelease(Location pt)
	{
		pressed = false; pressed2 = false; 
	}
	

}