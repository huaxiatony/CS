import objectdraw.*;
import java.awt.*;

public class Ball extends WindowController
{
	private FilledOval outer; private FilledOval inner1; private FilledOval inner2; private FilledOval inner3; private FilledOval inner4;
	public Ball(double x, double y, DrawingCanvas canvas)
	{
		outer = new FilledOval(x, y, 50, 50, canvas); outer.setColor(Color.red);
		inner1 = new FilledOval(x + 5, y + 5, 40, 40, canvas); inner1.setColor(Color.white);
		inner2 = new FilledOval(x + 10, y + 10, 30, 30, canvas); inner2.setColor(Color.red);
		inner3 = new FilledOval(x + 15, y + 15, 20, 20, canvas); inner3.setColor(Color.white);
		inner4 = new FilledOval(x + 20, y + 20, 10, 10, canvas); inner4.setColor(Color.red);
	}
	public void move(double dx, double dy)
	{
		outer.move(dx, dy); inner1.move(dx, dy); inner2.move(dx, dy); inner3.move(dx, dy); inner4.move(dx, dy);
	}
	public void hide()
	{
		inner1.hide(); outer.hide(); inner2.hide(); inner3.hide(); inner4. hide();
	}
	public void show()
	{
		inner1.show(); outer.show(); inner2.show(); inner3.show(); inner4.show();
	}
	public void moveTo(double dx, double dy)
	{
		outer.moveTo(dx, dy); inner1.moveTo(dx+5, dy+5); inner2.moveTo(dx+10, dy+10); inner3.moveTo(dx+15, dy+15); inner4.moveTo(dx+20, dy+20);
	}
	public void removeFromCanvas()
	{
		outer.removeFromCanvas(); inner1.removeFromCanvas(); inner2.removeFromCanvas(); inner3.removeFromCanvas(); inner4.removeFromCanvas();
	}
	public boolean contains(Location pt)
	{
		if(outer.contains(pt)){
			return true;
		}
		else {
			return false;
		}
	}

}