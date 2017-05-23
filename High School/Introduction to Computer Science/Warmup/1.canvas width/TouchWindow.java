import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	public void begin()
	{
		FilledRect sky;
		sky = new FilledRect(1,1,canvas.getWidth(),canvas.getHeight(),canvas);
		sky.setColor(Color.blue);
	}

}