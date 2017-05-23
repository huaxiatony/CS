import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	FilledRect head;
	FilledRect arms;
	FilledRect body;
	FilledRect legone;
	FilledRect legtwo;
	
	public void begin()
	{
		
		
		head = new FilledRect(400,300,50,60,canvas);
		head.setColor(Color.gray);
		head.hide();
		
		
		arms = new FilledRect(325,375,200,25,canvas);
		arms.setColor(Color.black);
		arms.setColor(Color.black);
		arms.hide();
	
		
		body = new FilledRect(350,350,160,100,canvas);
		body.setColor(Color.blue);
		body.hide();
		
		
		legone = new FilledRect(400,450,20,10,canvas);
		legone.hide();
		
		
		legtwo = new FilledRect(440,450,20,10,canvas);
		legtwo.hide();
	}
	public void onMousePress(Location point)
	{
		head.show();
		arms.show();
		body.show();
		legone.show();
		legtwo.show();
		
	}
	public void onMouseRelease(Location point)
	{
		head.hide();
		arms.hide();
		body.hide();
		legone.hide();
		legtwo.hide();
	}
}

