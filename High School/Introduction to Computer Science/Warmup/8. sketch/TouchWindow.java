import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	FilledOval dot; 
	FramedOval eraser;
	public void begin()
	{
		
		dot = new FilledOval(1,1,10,10,canvas);
		
		eraser = new FramedOval(1,1,50,50,canvas);
		
		
	}
	public void onMouseDrag(Location point)
	{
		dot = new FilledOval(point,10,10,canvas);
	}
	public void onMousePress(Location point)
	{
		if(eraser.contains(point))
		{
			canvas.clear();
			eraser = new FramedOval(1,1,50,50,canvas);
		}
}