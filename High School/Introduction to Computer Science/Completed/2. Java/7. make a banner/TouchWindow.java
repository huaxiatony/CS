import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	public void begin()
	{
		FilledRect joe;
		joe = new FilledRect(200,200,350,100,canvas);
		joe.setColor(Color.green);
		
		Text bob;
		bob = new Text( "This Is My Banner",240,230,canvas);
		bob.setFontSize(30);
		bob.setBold();
		bob.setItalic();
		bob.setColor(Color.red);
	}

}