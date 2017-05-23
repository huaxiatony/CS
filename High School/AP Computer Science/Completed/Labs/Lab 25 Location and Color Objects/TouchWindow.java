import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
	FilledRect face; FilledRect hair; FilledRect eye1; FilledRect eye2; FilledRect lips; 
	private Text send; private Text send2; int num = 0; 
	public void begin()
	{
		
		face();
		send = new Text("Measles! Click on the face to catch the disease!", 200,400,canvas);
		
	}
	public void face()
	{
		face = new FilledRect(100,100,500,500,canvas);
		face.setColor(Color.orange);
		
		hair = new FilledRect(100,100,500,150,canvas);
		hair.setColor(Color.black);
		
		eye1 = new FilledRect(200,300,50,100,canvas);
		eye1.setColor(Color.black);
		
		eye2 = new FilledRect(450,300,50,100,canvas);
		eye2.setColor(Color.black); 
		
		lips = new FilledRect(200,500,300,50,canvas);
		lips.setColor(Color.red);
		
	}
	public void onMousePress(Location pt) 
	{
		if(num %2 == 0) {
			new FilledOval(pt,10,10,canvas).setColor(Color.blue);
			num++;
		}
		else {
			new FilledOval(pt,10,10,canvas).setColor(Color.red);
			num++;
		}
		send.hide(); send2.hide();
	}
	public void onMouseEnter(Location pt)
	{
			send = new Text("Measles! Click to catch the disease!", 0, 0, canvas); 
			send2.hide(); 
	}
	public void onMouseExit(Location pt)
	{
		send.show(); 
		canvas.clear();
		face();
		send2 = new Text("You have been cured!", 0, 0, canvas);
	}

}