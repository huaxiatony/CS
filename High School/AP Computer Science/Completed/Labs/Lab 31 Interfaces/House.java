import objectdraw.*;
import java.awt.*;

public class House implements Dragable
{
	private FilledRect build; private FilledRect door; private FilledRect roof; 
	public House(double x, double y, DrawingCanvas canvas)
	{
		build = new FilledRect(x,y,50,50,canvas); build.setColor(Color.blue);
		door = new FilledRect(x+20,y+25,10,20,canvas); door.setColor(Color.red);
	}
	public void move(double dx, double dy)
	{
		build.move(dx, dy); door.move(dx, dy); 
	}
	public void hide()
	{
		door.hide(); build.hide(); 
	}
	public void show()
	{
		door.show(); build.show();
	}
	public void moveTo(double dx, double dy)
	{
		build.moveTo(dx, dy); door.moveTo(dx+20, dy+25); 
	}
	public void removeFromCanvas()
	{
		build.removeFromCanvas(); door.removeFromCanvas(); 
	}
	public boolean contains(Location pt)
	{
		if(build.contains(pt)){
			return true;
		}
		else {
			return false;
		}
	}

}