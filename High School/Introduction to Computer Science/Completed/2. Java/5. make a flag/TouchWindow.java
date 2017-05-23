import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	public void begin()
	{
		FilledRect bill;
		bill = new FilledRect(45,380,5,150,canvas);
		bill.setColor(Color.gray);
		
		FilledRect joe;
		joe = new FilledRect(50,380,90,60,canvas);
		joe.setColor(Color.black);
		
		FilledRect ball;
		ball = new FilledRect(50,440,90,30,canvas);
		ball.setColor(Color.red);
		
		FilledRect jill;
		jill = new FilledRect(50,410,90,30,canvas);
		jill.setColor(Color.yellow);
		
	}
}