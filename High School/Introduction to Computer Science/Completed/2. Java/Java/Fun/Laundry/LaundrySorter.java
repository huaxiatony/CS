import objectdraw.*; import java.awt.*;

public class LaundrySorter extends WindowController
{
	private Laundry laundry;
	private Pants pants; private Tshirt shirts;
	private Location lastPoint;
	private Text correctText; private Text incorrectText;
	private boolean isInBox;
	private LaundryBasket darksBasket; private LaundryBasket whitesBasket; private LaundryBasket colorsBasket;
	int correct = 0; int incorrect = 0;

	public void begin()
	{
		darksBasket = new LaundryBasket(50, 150, "dark", canvas);
		whitesBasket = new LaundryBasket(125, 150, "white", canvas);
		colorsBasket = new LaundryBasket(200, 150, "color", canvas);
		
		correctText = new Text("Correct: " + correct, 150, 25, canvas); 
		incorrectText = new Text("Incorrect: " + incorrect, 151, 45, canvas);

		generateClothes();
	}
	
	private void generateClothes()
	{
		int rannum = (int)(Math.random() * 2);
		
		if(rannum == 1) { pants = new Pants(20, 20, canvas); laundry = pants; } else { shirts = new Tshirt(20, 20, canvas); laundry = shirts; }
	}
	
	public void onMouseRelease(Location point)
	{
		if(isInBox)
		{
			if(whitesBasket.contains(point) && laundry.colorValue() > 600)
			{
				correct();
			}
			else if(colorsBasket.contains(point) && laundry.colorValue() >= 250 && laundry.colorValue() <= 600)
			{
				correct();
			}
			else if(darksBasket.contains(point) && laundry.colorValue() < 250)
			{
				correct();
			}
			else if(darksBasket.contains(point) || colorsBasket.contains(point) || whitesBasket.contains(point))
			{
				incorrect();
			}
			else
			{
				laundry.moveTo(20, 20);
			}
		}
	}

	public void onMouseDrag(Location point) { if(isInBox) { laundry.move(point.getX() - lastPoint.getX(), point.getY() - lastPoint.getY()); lastPoint = point; } }
	public void onMousePress(Location point) { lastPoint = point; isInBox = laundry.contains(point); }
	public void correct() { correct++; correctText.setText("Correct: " + correct); laundry.hide(); generateClothes(); }
	public void incorrect() { incorrect++; incorrectText.setText("Incorrect: " + incorrect); laundry.moveTo(20, 20); }
}