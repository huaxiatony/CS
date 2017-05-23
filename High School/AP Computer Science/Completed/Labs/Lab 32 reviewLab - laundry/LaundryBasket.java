import objectdraw.*;
import java.awt.*;

public class LaundryBasket extends WindowController
{
	Text name;
	FramedRect basket;  
	public LaundryBasket (String nameOfBasket, double x, double y, DrawingCanvas canvas)
	{
		basket = new FramedRect(x,y,150,100,canvas); 
		name = new Text(nameOfBasket,x+50,y+50,canvas); 
	}

	public boolean contains(Location pt)
	{
		if(basket.contains(pt)){
			return true;
		}
		else {
			return false;
		}
	}
	
	public double getx()
	{
		return basket.getX();
	}
	
	public double gety()
	{
		return basket.getY(); 
	}
	
}