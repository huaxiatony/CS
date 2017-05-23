import objectdraw.*;
import java.awt.*;

// The Target class now has return methods added to it.

public class Target 
{
	private FilledOval inner;
	private FilledOval outer;

	public Target(double x, double y, DrawingCanvas canvas)
	{
		outer = new FilledOval(x,y,30,30,canvas);
		outer.setColor(Color.red);
		inner = new FilledOval(x+15-7,y+15-7,15,15,canvas);
		inner.setColor(Color.white);
	}
	
	public void move(double dx, double dy)
	{
		outer.move(dx,dy);
		inner.move(dx,dy);
	}

	public boolean contains(Location p)
	{
		if(outer.contains(p))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public void removeFromCanvas()
	{
		outer.removeFromCanvas();
		inner.removeFromCanvas();
	}

	public double getX()
	{
		return outer.getX();
	}
	
	public double getY()
	{
		return outer.getY();
	}

	public void hide()
	{
		outer.hide();
		inner.hide();
	}
	
	public void show()
	{
		outer.show();
		inner.show();
	}
	public String toString()
	{
		return "This target is at the Location: "+ this.getX() + " , "+ this.getY();
	}
	
}