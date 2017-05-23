import objectdraw.*;
import java.awt.*;

public class BallShow extends WindowController
{
	Ball [] bob;
	int counter = 0;
	public void begin()
	{
		bob = new Ball[1000];
		// bob[0] = new Ball(Math.random()*canvas.getWidth(),Math.random()*canvas.getHeight(),canvas);
		for(int i = 0; i < bob.length; i++) {
			bob[i] = new Ball(Math.random()*canvas.getWidth(),Math.random()*canvas.getHeight(),canvas);
		}
		
		

	}
	
	public void onMousePress(Location pt)
	{
		for(int i = 0; i < bob.length; i++) {
			if(bob[i].contains(pt)) {
				bob[i].hide();
			}
		}
	}

}