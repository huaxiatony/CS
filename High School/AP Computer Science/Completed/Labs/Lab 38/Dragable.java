import objectdraw.*;
import java.awt.*;

public interface Dragable{
	public void moveTo(double dx, double dy); 
	public void move(double dx, double dy); 
	public boolean contains(Location l); 
	
}