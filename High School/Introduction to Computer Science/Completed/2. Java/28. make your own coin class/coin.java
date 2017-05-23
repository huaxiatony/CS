import objectdraw.*;
import java.awt.*;

class coin
{
	private FilledOval quarter;
	private Text phrase;
	private Color lightgray = new Color(195,195,195);

	public coin(int x, int y, DrawingCanvas canvas)
	{
	quarter = new FilledOval( x,y,50,50,canvas );
	quarter.setColor(lightgray);
		
	phrase = new Text( " 25 " , x+12 ,y+12 ,canvas);
	phrase.setFontSize(12);
	phrase.setBold();
	}
	public void hide()
	{
		quarter.hide();
		phrase.hide();
	}
	public void show()
	{
		quarter.show();
		phrase.show();
	}
	public void move(double dx, double dy)
	{
		quarter.move(dx,dy);
		phrase.move(dx,dy);
	}
	public boolean contains(Location p)
	{
		if(quarter.contains(p))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	public void moveTo(int x, int y)
	{
		quarter.moveTo(x,y);
		phrase.moveTo(x,y);
	}

	public void removeFromCanvas()
	{
		quarter.removeFromCanvas();
		phrase.removeFromCanvas();
	}
}
