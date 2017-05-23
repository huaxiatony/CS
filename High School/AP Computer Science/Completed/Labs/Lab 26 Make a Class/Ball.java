import objectdraw.*;
import java.awt.*;

public class Ball extends WindowController
{
	private FilledOval outer;
	private FilledOval inner1; 
	private FilledOval inner2; 
	private FilledOval inner3; 
	private FilledOval inner4;
	
	public Ball(double x, double y, DrawingCanvas canvas)
	{
		outer = new FilledOval(x, y, 50, 50, canvas); outer.setColor(Color.red);
		inner1 = new FilledOval(x + 5, y + 5, 40, 40, canvas); inner1.setColor(Color.white);
		inner2 = new FilledOval(x + 10, y + 10, 30, 30, canvas); inner2.setColor(Color.red);
		inner3 = new FilledOval(x + 15, y + 15, 20, 20, canvas); inner3.setColor(Color.white);
		inner4 = new FilledOval(x + 20, y + 20, 10, 10, canvas); inner4.setColor(Color.red);
		
	}

}