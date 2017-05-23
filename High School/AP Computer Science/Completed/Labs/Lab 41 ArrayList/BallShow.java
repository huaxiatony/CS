import objectdraw.*;
import java.awt.*;
import java.util.ArrayList;

public class BallShow extends WindowController
{
	boolean pressed2; int pass = 0; 
	Location lastpos2; 
	private ArrayList<Dragable> joe = new ArrayList<Dragable>();
	public void begin()
	{
		for(int x=0;x<5;x++)
		{
			joe.add(new Ball(50,50,canvas)); joe.add(new Arrow(100,100,canvas));
		}
		
	}
	public void onMousePress(Location pt)
	{
		pressed2 = false; 
		for(int i = joe.size()-1; i>=0;i--)
		{
			if(joe.get(i).contains(pt))
			{
				pass = i; 
				pressed2 = true; lastpos2 = pt; 
				break;
			}
		}
	}
	public void onMouseDrag(Location pt)
	{
		if(pressed2)
		{
			double dx = pt.getX() - lastpos2.getX(); double dy = pt.getY() - lastpos2.getY(); joe.get(pass).move(dx,dy);
		}
		lastpos2 = pt; 
	}
	public void onMouseRelease(Location pt)
	{
		pressed2 = false; 
	}
	

}