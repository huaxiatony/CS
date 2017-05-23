import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	FilledOval FO; Text message;
	
	public void begin()
	{	
		new FilledRect(0, 0, 1500, 500, canvas).setColor(Color.blue);
		FO = new FilledOval(200, 400, 200, 200, canvas); FO.setColor(Color.yellow);
		new FilledRect(0, 500, 1500, 500, canvas).setColor(Color.green);
		
		for(int i = 0; i < 500; i++) { new FilledOval((int)(Math.random() * 1500), (int)(Math.random() * 500), 3, 3, canvas).setColor(Color.yellow); }
		
		message = new Text("Please click to cause a sunrise.", 100, 100, canvas);
		message.setFontSize(30);
		message.setBold();
		message.setColor(Color.green);
	}
	
	public void onMouseClick(Location point)
	{
		FO.move(0, -15);
		message.hide();
	}
	
	public void onMouseExit(Location point)
	{
		message.show();
		FO.moveTo(200, 400);
	}

}