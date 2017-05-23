import objectdraw.*;
import java.awt.*;

public class TouchWindow extends WindowController
{
		Text baob;
		FilledOval bonbon;
		Waldo bonjr;
		FilledRect button;
		FilledRect button2;
		FilledRect button3;
		FilledRect button4;
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
		
		button = new FilledRect(500,500,50,50,canvas);
		button.setColor(Color.red);
		
		button2 = new FilledRect(400,550,50,50,canvas);
		button2.setColor(Color.red);
		
		button3 = new FilledRect(600,550,50,50,canvas);
		button3.setColor(Color.red);
		
		button4 = new FilledRect(500,600,50,50,canvas);
		button4.setColor(Color.red);
		
		
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
		
		
		FilledRect qoe;
		qoe = new FilledRect(200,200,250,90,canvas);
		qoe.setColor(Color.blue);
		
		
		baob = new Text( "This is my banner",240,230,canvas);
		baob.setFontSize(20);
		baob.setBold();
		baob.setItalic();
		baob.setColor(Color.red);
		
		
		
		bonjr = new Waldo(Math.random()*300,Math.random()*300,canvas);
	}
	public void onMouseClick(Location point)
	{
	if(button.contains(point))
		{
			bonjr.moveTo(bonjr.getX(),bonjr.getY()-5);
		} 
		
	if(button2.contains(point))
		{
			bonjr.moveTo(bonjr.getX()-5, bonjr.getY());
		} 
	
	if(button3.contains(point))
		{
			bonjr.moveTo(bonjr.getX()+5, bonjr.getY());
		} 
	
	if(button4.contains(point))
		{
			bonjr.moveTo(bonjr.getX(), bonjr.getY()+5);
		} 
		
	
	
	}
}
