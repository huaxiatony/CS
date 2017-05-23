import objectdraw.*;
import java.awt.*;

public class BallShow extends WindowController
{
	Ball joe;
	public void begin()
	{
		joe = new Ball(50.0,50.0,canvas);
	}
	
	public void onMousePress(Location pt)
	{
		// new Ball(Math.random()*canvas.getWidth(),Math.random()*canvas.getHeight(),canvas);
		joe.moveTo(100,100);
	}

}