import objectdraw.*;
import java.awt.*;

public class LaundrySorter extends WindowController
{
	boolean pressed;
	LaundryBasket frame,frame2,frame3; 
	Text correctNum, incorrectNum; 
	Location lastpos, lastpos3, lastpos4, lastpos5;
	int correct = 0, incorrect = 0;
	Laundry joe;  
	public void begin()
	{
		frame = new LaundryBasket("dark",100,500,canvas); 
		frame2 = new LaundryBasket("white",300,500,canvas); 
		frame3 = new LaundryBasket("color",500,500,canvas); 
		
		correctNum = new Text("# of Correct: " + correct,100,200,canvas); 
		incorrectNum = new Text("# of Incorrect: " + incorrect,100,210,canvas); 
		
		lastpos3 = new Location(frame.getx()+75,frame.gety()+50);
		lastpos4 = new Location(frame2.getx()+75,frame2.gety()+50); 
		lastpos5 = new Location(frame3.getx()+75,frame3.gety()+50); 
		
		createNewClothes(); 
	}

	public void onMousePress(Location pt) {
		pressed = false;  
		if(joe.contains(pt)) {
			pressed = true; lastpos = pt; 
		}
	}
	
	public void onMouseDrag(Location pt) {
		if(pressed) {
			double dx = pt.getX() - lastpos.getX(); double dy = pt.getY() - lastpos.getY(); joe.move(dx,dy); 
		}
		lastpos = pt; 
	}
	
	public void onMouseRelease(Location l) {
		if(pressed) {
			if(frame.contains(l)) {
				if(joe.colorValue() <= 250) {
					correctBasket();
				}
				else {
					incorrectBasket(); 
				}
			}
			else if(frame2.contains(l)) {
				if(joe.colorValue() > 600) {
					correctBasket();
				}
				else {
					incorrectBasket(); 
				}
			}
			else if(frame3.contains(l)) {
				if(joe.colorValue() <= 600 && joe.colorValue() > 250) {
					correctBasket();
				}
				else {
					incorrectBasket(); 
				}
			}
		}
	}
	public void createNewClothes() {
		int counter = (int)(10*Math.random()); 
		if(counter % 2 == 0) {
			joe = new Tshirt(50,50,canvas);
		}
		else {
			joe = new Pants(50,50,canvas);
		}
	}
	public void correctBasket() {
		correct++;
		correctNum.setText("# of correct: " + (correct));
		joe.hide(); 
		createNewClothes();
	}
	public void incorrectBasket() {
		incorrect++;
		joe.moveTo(50,50); 
		incorrectNum.setText("# of incorrect: " + (incorrect));
	}
	// public void insert(String str, int index) {
		// String temp1, temp2; 
		// temp1 = myline.substring(0,index); 
		// temp2 = myline.substring(index); 
		// myLine = temp1 + str + temp2; 
		
	// }
	// @Override
	// public String toString()
	// {
		// return myLine; 
	// }
	
}
