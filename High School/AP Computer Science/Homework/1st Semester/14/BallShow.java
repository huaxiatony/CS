import objectdraw.*;
import java.awt.*;

public class BallShow extends WindowController
{
	Ball joe; 
	boolean pressed;
	Location lastpos;
	Ball[] bob;
	int x = 0; 
	public void begin()
	{
		bob = new Ball[1000];
		for(int i = 0; i < bob.length; i++) {
			bob[i] = new Ball(Math.random()*canvas.getWidth(),Math.random()*canvas.getHeight(),canvas);
		}
	}
	public void onMousePress(Location pt)
	{
		for(int i = 0; i < 1000; i++) {
			if(bob[i].contains(pt)) {
				pressed = true; lastpos = pt; x = i; break;
			}
			else {
				pressed = false; 
			}
		}
	}
	public void onMouseDrag(Location pt)
	{
		if(pressed) 
		{
			double dx = pt.getX() - lastpos.getX(); double dy = pt.getY() - lastpos.getY(); bob[x].move(dx,dy);
		}
		lastpos = pt;
		
	}

}