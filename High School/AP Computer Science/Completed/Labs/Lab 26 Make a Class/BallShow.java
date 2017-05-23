import objectdraw.*;
import java.awt.*;

public class BallShow extends WindowController
{
	public void begin()
	{
		new Ball(50.0,50.0,canvas);
	}
	
	public void onMousePress(Location pt)
	{
		new Ball(Math.random()*canvas.getWidth(),Math.random()*canvas.getHeight(),canvas);
	}

}