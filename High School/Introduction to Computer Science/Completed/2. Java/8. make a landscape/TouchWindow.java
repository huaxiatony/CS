import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	public void begin()
	{
		
		FilledRect joe;
		joe = new FilledRect(10,10,700,400,canvas);
		joe.setColor(Color.black);
		
		FilledRect underbar;
		underbar = new FilledRect(10,300,700,300,canvas);
		underbar.setColor(Color.green);
		
		FilledOval boo;
		boo = new FilledOval(40,40,75,75,canvas);
		boo.setColor(Color.gray);
		
	}

}