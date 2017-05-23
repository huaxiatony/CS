import objectdraw.*; import java.awt.*;

public class LaundryBasket
{
	private FramedRect basket;

	public LaundryBasket(double x, double y, String color, DrawingCanvas canvas)
	{
		basket = new FramedRect(x, y, 50, 50, canvas);
		if(color == "dark") { new Text("Darks", 60, 165, canvas); } else if(color == "white") { new Text("Whites", 132, 165, canvas); } else if(color == "color") { new Text("Colors", 207, 165, canvas); }
	}
	
	public boolean contains(Location point) { return basket.contains(point); }
}