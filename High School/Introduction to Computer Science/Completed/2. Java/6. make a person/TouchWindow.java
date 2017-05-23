import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	public void begin()
	{
		
		FilledRect head;
		head = new FilledRect(400,300,50,60,canvas);
		head.setColor(Color.gray);
		
		FilledRect arms;
		arms = new FilledRect(325,375,200,25,canvas);
		arms.setColor(Color.black);
		arms.setColor(Color.black);
		
		FilledRect body;
		body = new FilledRect(350,350,160,100,canvas);
		body.setColor(Color.blue);
		
		FilledRect legone;
		legone = new FilledRect(400,450,20,10,canvas);
		
		FilledRect legtwo;
		legtwo = new FilledRect(440,450,20,10,canvas);
		
		
	}
}