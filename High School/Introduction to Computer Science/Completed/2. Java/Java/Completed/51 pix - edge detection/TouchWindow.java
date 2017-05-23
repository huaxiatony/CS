import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	private FilledRect FR2;
	private FilledRect FR1;
	private Text distanceText;

	public void begin()
	{
		FR1 = new FilledRect(10, 10, 50, 50, canvas);
		FR2 = new FilledRect(100, 10, 50, 50, canvas);

		System.out.print("Red Value: ");
        int redValue = new EasyReader().readInt();
        System.out.print("Green Value: ");
        int greenValue = new EasyReader().readInt();
        System.out.print("Blue Value: ");
        int blueValue = new EasyReader().readInt();

        FR1.setColor(new Color(redValue, greenValue, blueValue));
		FR2.setColor(new Color(redValue, greenValue, blueValue));

		distanceText = new Text("Current Distance: " + new CVMath().colorDist(FR1.getColor(), FR2.getColor()), 30, 150, canvas);
	}


	public void onMouseClick(Location location)
    {
        int redValue = (int)(Math.random() * 256);
        int blueValue = (int)(Math.random() * 256);
        int greenValue = (int)(Math.random() * 256);
        
        FR2.setColor(new Color(redValue, greenValue, blueValue));
        
        distanceText.setText("Current Distance: " + (int)(new CVMath().colorDist(FR1.getColor(), FR2.getColor())));
    }

}