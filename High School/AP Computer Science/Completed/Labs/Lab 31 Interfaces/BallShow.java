import objectdraw.*;
import java.awt.*;

public class BallShow extends WindowController
{
	Ball joe; 
	House bob; 
	boolean pressed; boolean pressed2; boolean pressed3;
	Location lastpos; Location lastpos2; Location lastpos3;
	Dragable[] arr;
	int x = 0; 
	public void begin()
	{
		arr = new Dragable[10];
		joe = new Ball(200,200,canvas);
		// tom = new FilledRect(100,100,50,50,canvas); tom.setColor(Color.green);
		for(int i = 0; i < arr.length; i++) {
			arr[i] = new House(Math.random()*canvas.getWidth(),Math.random()*canvas.getHeight(),canvas);
		}
	}
	public void onMousePress(Location pt)
	{
		pressed = false; pressed2 = false; pressed3 = false; 
		for(int i = 0; i < 10; i++) {
			if(arr[i].contains(pt)) {
				pressed = true; lastpos = pt; x = i; break; 
			}
			else if(joe.contains(pt)) {
				pressed2 = true; lastpos2 = pt;
			}
		}
		
		
	}
	public void onMouseDrag(Location pt)
	{
		if(pressed) 
		{
			double dx = pt.getX() - lastpos.getX(); double dy = pt.getY() - lastpos.getY(); arr[x].move(dx,dy); 
		}
		if(pressed2)
		{
			double dx = pt.getX() - lastpos2.getX(); double dy = pt.getY() - lastpos2.getY(); joe.move(dx,dy); 
		}
		
		lastpos = pt; lastpos2 = pt; lastpos3 = pt;
	}

}