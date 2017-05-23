import objectdraw.*;
import java.awt.*;

// This program hides the Target object if the cursor is 
// within the object when the mouse is clicked.

public class TargetShow extends WindowController
{
	Target bob;
	boolean pressed;
	Location lastpos;
	public void begin()
	{
		bob = new Target(20,20,canvas);
		// System.out.print(bob);
	}

	public void onMousePress(Location pt)
	{
		pressed = false; 
		if(bob.contains(pt)) 
		{
			pressed = true; lastpos = pt;
		}
	}
	public void onMouseDrag(Location pt)
	{
		if(pressed) 
		{
			double dx = pt.getX() - lastpos.getX(); double dy = pt.getY() - lastpos.getY(); bob.move(dx,dy);
		}
		lastpos = pt;
	}
	public void onMouseRelease(Location pt)
	{
		System.out.println(bob); 
	}
}