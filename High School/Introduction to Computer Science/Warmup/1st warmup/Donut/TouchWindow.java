import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	public void begin()
	{
		FilledOval outer;
		outer = new FilledOval(0,0,500,500,canvas);
		outer.setColor(Color.orange);
		
		FilledOval inner;
		inner = new FilledOval(200,200,100,100,canvas);
		inner.setColor(Color.white);
	}

}