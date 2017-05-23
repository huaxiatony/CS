import objectdraw.*; import java.awt.*;

public interface Laundry
{
	public boolean contains(Location pt);
	public void move(double xOffset, double yOffset);
	public void moveTo(double x, double y);
	public void hide();
	public int colorValue();
}