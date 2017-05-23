import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	int count = 0;
	FilledRect joe;
	public void begin()
	{
		int x;
		int y;
		x=(int)(Math.random()*canvas.getWidth());
		y=(int)(Math.random()*canvas.getHeight());

		FilledRect joe;
		joe = new FilledRect(x,y,30,50,canvas);
		
	}
	public void onMouseClick(Location point)
	{
				//canvas.clear();
			//joe.removeFromCanvas();
			joe.hide();
			count = count +1;
			
	}

}