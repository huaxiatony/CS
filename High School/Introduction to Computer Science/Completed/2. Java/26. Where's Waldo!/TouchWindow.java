import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
		Text bob;
		int counter = 0;
		FilledOval bonbon;
		Waldo bonjr;
		boolean t = true;
		boolean a = true;
		
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
		
		
		FilledRect head;
		head = new FilledRect(400,300,50,60,canvas);
		head.setColor(Color.gray);
		
		FilledRect arms;
		arms = new FilledRect(325,375,200,25,canvas);
		arms.setColor(Color.black);
		arms.setColor(Color.black);
		
		FilledRect body;
		body = new FilledRect(350,350,160,100,canvas);
		body.setColor(Color.blue);
		
		FilledRect legone;
		legone = new FilledRect(400,450,20,10,canvas);
		
		FilledRect legtwo;
		legtwo = new FilledRect(440,450,20,10,canvas);
		
		
		FilledRect banner;
		banner = new FilledRect(200,200,250,90,canvas);
		banner.setColor(Color.blue);
		
		
		bob = new Text( "This Is My Banner!" ,240,230,canvas);
		bob.setFontSize(20);
		bob.setBold();
		bob.setItalic();
		bob.setColor(Color.red);
		
		bonjr = new Waldo( Math.random()*200, Math.random()*200,a,canvas);
		
		if(a)
		{
		bonjr.hide();
		}
		else
		{
		bonjr.show();
		}
		
	}
	public void onMousePress(Location point)
	{
		
				
		bob.setText( "Times pressed:" + counter);
		
		if(bonjr.contains(point))
		{
			bonjr.show();
			bob.setText( "You Win! Number of times pressed:" + counter);
			t = false;
		} 
		if(t)
		{
		counter++;
		}
	}
}
