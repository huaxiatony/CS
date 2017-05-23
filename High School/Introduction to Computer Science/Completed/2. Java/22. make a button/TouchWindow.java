import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
		FilledRect button;
		Text bob;
		int counter = 0;
		
	public void begin()
	{
		
		button = new FilledRect(100,100,40,40,canvas);
		button.setColor(Color.red);
		
		
		FilledRect box;
		box = new FilledRect(1,1,100,20,canvas);
		box.setColor(Color.black);
		
		bob = new Text(  "Times pressed:" + counter,1,1,canvas);
		bob.setFontSize(10);
		bob.setBold();
		bob.setItalic();
		bob.setColor(Color.white);
		
	}
	public void onMouseClick (Location point)
	{
		
		bob.setText( "Times pressed:" + counter);
		
		if(button.contains(point))
		{
			counter++;
		} 
		
	
	}
}