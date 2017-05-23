import objectdraw.*;
import java.awt.*;

public interface Laundry {
	public void moveTo(double x, double y);
	public void move(double x,double y);
	public boolean contains(Location l);
	public int colorValue(); 
	public void hide(); 
}