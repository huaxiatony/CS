import objectdraw.*;
import java.awt.*;

public class Arrow extends Ball implements Dragable
{
	private Line arrow; 
	public Arrow(double x, double y, DrawingCanvas canva)
	{
		super(x,y,canva); 
		arrow = new Line(x + 22, y + 22,x,y, canva); 
	}
	public Arrow(Location l, DrawingCanvas c) 
	{
		this(l.getX(),l.getY(),c); 
	}
	public void move(double dx, double dy)
	{
		super.move(dx,dy); arrow.move(dx,dy); 
	}
	public void hide()
	{
		super.hide(); arrow.hide(); 
	}
	public void show()
	{
		super.show(); arrow.show(); 
	}
	public void moveTo(double dx, double dy)
	{
		super.moveTo(dx,dy); arrow.moveTo(dx + 22, dy + 22); 
	}
	public void removeFromCanvas()
	{
		super.removeFromCanvas(); arrow.removeFromCanvas(); 
	}
	public boolean contains(Location pt)
	{
		if(super.contains(pt)){
			return true;
		}
		else {
			return false;
		}
	}
}