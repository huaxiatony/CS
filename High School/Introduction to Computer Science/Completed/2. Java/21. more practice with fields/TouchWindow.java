import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
		FilledRect head;
		FilledRect arms;
		FilledRect body;
		FilledRect legone;
		FilledRect legtwo;
		int counter = 0;
	public void begin()
	{
		
		FilledRect jaoe;
		jaoe = new FilledRect(10,10,700,400,canvas);
		jaoe.setColor(Color.black);
		
		FilledRect underbar;
		underbar = new FilledRect(10,300,700,300,canvas);
		underbar.setColor(Color.green);
		
		FilledOval boo;
		boo = new FilledOval(40,40,75,75,canvas);
		boo.setColor(Color.gray);
		
		
		FilledRect bill;
		bill = new FilledRect(45,380,5,150,canvas);
		bill.setColor(Color.gray);
		
		FilledRect joe;
		joe = new FilledRect(50,380,90,60,canvas);
		joe.setColor(Color.black);
		
		FilledRect ball;
		ball = new FilledRect(50,440,90,30,canvas);
		ball.setColor(Color.red);
		
		FilledRect jill;
		jill = new FilledRect(50,410,90,30,canvas);
		jill.setColor(Color.yellow);
		
		FilledRect qoe;
		qoe = new FilledRect(200,200,250,90,canvas);
		qoe.setColor(Color.blue);
		
		Text baob;
		baob = new Text( "This Is My Banner",240,230,canvas);
		baob.setFontSize(20);
		baob.setBold();
		baob.setItalic();
		baob.setColor(Color.red);
		
		
		head = new FilledRect(400,300,50,60,canvas);
		head.setColor(Color.gray);
		head.hide();
		
		arms = new FilledRect(325,375,200,25,canvas);
		arms.setColor(Color.black);
		arms.hide();
		
		body = new FilledRect(350,350,160,100,canvas);
		body.setColor(Color.blue);
		body.hide();
		
		legone = new FilledRect(400,450,20,10,canvas);
		legone.hide();
		
		legtwo = new FilledRect(440,450,20,10,canvas);
		legtwo.hide();
		
		
		
	}
	public void onMousePress(Location point)
	{
		head.show();
		arms.show();
		body.show();
		legone.show();
		legtwo.show();
		
		
		counter = counter +1; 
		if(counter%2==0)
		{
		head.hide();
		arms.hide();
		body.hide();
		legone.hide();
		legtwo.hide();
		}
		
	}
	public void onMouseRelease(Location point)
	{
	
	}	
}