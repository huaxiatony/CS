import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	coin quarter;
	int counter = 0;
	public void begin()
	{
		quarter = new coin(200,200,canvas);
		
	}
	public void onMouseClick(Location p)
	{
		quarter.hide();
		counter ++;
			if(counter%2==0)
			{
			quarter.show();
			}
	}
}