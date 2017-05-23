import objectdraw.*;
import java.awt.*;

public class BallShow extends WindowController
{
	Ball joe; 
	public void begin()
	{
	
	}
	public void onMousePress(Location pt)
	{
		// joe = new Ball(pt.getX(),pt.getY(),canvas);
		joe = new Ball(pt,canvas); 
	}
	

}