import objectdraw.*;
import java.awt.*;
public abstract class Dragable
{
	public abstract void moveTo(double dx, double dy); 
	public abstract void move(double dx, double dy); 
	public abstract boolean contains(Location pt); 
	public abstract void hide(); 
	public abstract void show(); 
	public abstract void removeFromCanvas(); 
	
	
}