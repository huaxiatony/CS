import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	Text reveal;
	public void begin()
	{
		reveal = new Text("point",0,0,canvas);
		reveal.hide();
	}
	public void onMouseMove(Location point)
	{
		reveal.removeFromCanvas();
		reveal= new Text( "point",point.getX(),point.getY(),canvas);
		reveal.setText((point)); 
	
	
	}
}