/*
Title: Paint
Created By: John Choi
Period 2
*/

import objectdraw.*;
import java.awt.*; 

public class TouchWindow extends WindowController 
{
	Boolean eraserEnabled = false;
	Boolean mouseEntered = false;

	Text currentColor; 
	Text currentBrushSize;
	Text currentEraserSize;

	Text tabText;
	Text colorsHeader;
	Text brushSizeHeader;
	Text eraserHeader;
	Text otherFunctionsHeader;

	Text increaseBrushSizeText;
	Text decreaseBrushSizeText;
	Text increaseEraserSizeText;
	Text decreaseEraserSizeText;
	Text clearAllText;
	Text colorfunText;

	Text creditsText;

	Color chosenColor; // Default color = black
	
	FramedRect border;
	FilledRect insideBorder;
	
	int brushSize = 20;
	int eraserSize = 20;

	double cursorBrushPoint = 8.0;
	double cursorEraserPoint = 8.0;

	FilledOval blackColor;
	FilledOval blueColor;
	FilledOval redColor;
	FilledOval greenColor;
	FilledOval orangeColor;
	FilledOval yellowColor;
	FilledOval pinkColor;
	FilledOval magentaColor;
	
	FilledRect increaseBrushSize;
	FilledRect decreaseBrushSize;

	FilledRect increaseEraserSize;
	FilledRect decreaseEraserSize;

	FilledRect clearAll;
	FilledRect colorfun;

	FilledRect eraser;
	FilledOval eraserOval;

	FramedOval mouseBrushOutline;
	FramedOval mouseEraserOutline;

	FilledRect tab;

	Boolean tabEnabled;
	Boolean colorfunEnabled;
	
	public void begin()
	{
		loadControls();
	}

	public void onMouseRelease(Location point)
	{
		if(!border.contains(point) && !tab.contains(point))
		{
			if(!eraserEnabled) 
			{ 
				mouseBrushOutline.show(); 
				mouseBrushOutline.sendToFront();
				double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorBrushPoint;
				double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorBrushPoint;
				mouseBrushOutline.moveTo(x, y); 
			}
			else
			{
				mouseEraserOutline.show(); 
				mouseEraserOutline.sendToFront();
				double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorEraserPoint;
				double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorEraserPoint;
				mouseEraserOutline.moveTo(x, y); 
			}
		}

		bringControlsToFront();
	}
	
	public void onMousePress(Location point)
	{
		if(colorfunEnabled) { chosenColor = new Color((int)(Math.random() * 256), (int)(Math.random() * 256), (int)(Math.random() * 256)); }
		
		if(!border.contains(point) && !tab.contains(point))
		{
			if(!eraserEnabled)
			{ 
				mouseBrushOutline.hide();
			} 
			else 
			{
				mouseEraserOutline.hide();
			}
		}
		if(!border.contains(point) && !tab.contains(point))
		{
			if(eraserEnabled)
			{
				double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorEraserPoint;
				double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorEraserPoint;
				new FilledOval(x, y, eraserSize, eraserSize, canvas).setColor(chosenColor);
			}
			else
			{
				double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorBrushPoint;
				double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorBrushPoint;
				new FilledOval(x, y, brushSize, brushSize, canvas).setColor(chosenColor);
			}
		}

		if(blackColor.contains(point))
		{
			eraserEnabled = false; colorfunEnabled = false;
			currentColor.setText("Current Color: Black");
			chosenColor = Color.black;
		}
		else if(blueColor.contains(point))
		{
			eraserEnabled = false; colorfunEnabled = false;
			currentColor.setText("Current Color: Blue");
			chosenColor = Color.blue;
		}
		else if(redColor.contains(point))
		{
			eraserEnabled = false; colorfunEnabled = false;
			currentColor.setText("Current Color: Red");
			chosenColor = Color.red;
		}
		else if(greenColor.contains(point))
		{
			eraserEnabled = false; colorfunEnabled = false;
			currentColor.setText("Current Color: Green");
			chosenColor = Color.green;
		}
		else if(orangeColor.contains(point))
		{
			eraserEnabled = false; colorfunEnabled = false;
			currentColor.setText("Current Color: Orange");
			chosenColor = Color.orange;
		}
		else if(yellowColor.contains(point))
		{
			eraserEnabled = false; colorfunEnabled = false;
			currentColor.setText("Current Color: Yellow");
			chosenColor = Color.yellow;
		}
		else if(pinkColor.contains(point))
		{
			eraserEnabled = false; colorfunEnabled = false;
			currentColor.setText("Current Color: Pink");
			chosenColor = Color.pink;
		}
		else if(magentaColor.contains(point))
		{
			eraserEnabled = false; colorfunEnabled = false;
			currentColor.setText("Current Color: Magenta");
			chosenColor = Color.magenta;
		}
		else if(increaseBrushSize.contains(point))
		{
			brushSize++; 
			currentBrushSize.setText("Current Brush Size: " + brushSize); 
			mouseBrushOutline.setWidth(brushSize);
			mouseBrushOutline.setHeight(brushSize); 
			cursorBrushPoint = cursorBrushPoint + 0.5;

		}
		else if(decreaseBrushSize.contains(point))
		{
			if(brushSize != 1)
			{
				brushSize--; 
				currentBrushSize.setText("Current Brush Size: " + brushSize); 
				mouseBrushOutline.setWidth(brushSize); 
				mouseBrushOutline.setHeight(brushSize); 
				cursorBrushPoint = cursorBrushPoint - 0.5;
			}
		}
		else if(increaseEraserSize.contains(point))
		{
			eraserSize++; 
			currentEraserSize.setText("Current Eraser Size: " + eraserSize); 
			mouseEraserOutline.setWidth(eraserSize); 
			mouseEraserOutline.setHeight(eraserSize); 
			cursorEraserPoint = cursorEraserPoint + 0.5;

		}
		else if(decreaseEraserSize.contains(point))
		{
			if(eraserSize != 1)
			{
				eraserSize--; 
				currentEraserSize.setText("Current Eraser Size: " + eraserSize); 
				mouseEraserOutline.setWidth(eraserSize); 
				mouseEraserOutline.setHeight(eraserSize); 
				cursorEraserPoint = cursorEraserPoint - 0.5;
			}
		}
		else if(eraser.contains(point))
		{
			eraserEnabled = true; colorfunEnabled = false;
			chosenColor = Color.white;
			currentColor.setText("Current Color: None");
		}
		else if(clearAll.contains(point))
		{
			canvas.clear(); loadControls(); mouseEntered = false;
		}
		else if(tab.contains(point))
		{
			if(tabEnabled)
			{
				disableTab();
				tabEnabled = false;
			}
			else
			{
				enableTab();
				tabEnabled = true;
			}
		}
		else if(colorfun.contains(point))
		{
				colorfunEnabled = true;
				eraserEnabled = false;
				currentColor.setText("Current Color: Rainbow");
		}
	}

	public void onMouseDrag(Location point)
	{
		if(!tabEnabled)
		{
			if(!border.contains(point))
			{
				if(eraserEnabled)
				{
					double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorEraserPoint;
					double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorEraserPoint;
					new FilledOval(x, y, eraserSize, eraserSize, canvas).setColor(chosenColor);
				}
				else
				{
					double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorBrushPoint;
					double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorBrushPoint;
					
					if(colorfunEnabled)
					{
						new FilledOval(x, y, brushSize, brushSize, canvas).setColor(new Color((int)(Math.random() * 256), (int)(Math.random() * 256), (int)(Math.random() * 256)));
					}
					else
					{
						new FilledOval(x, y, brushSize, brushSize, canvas).setColor(chosenColor);
					}
				}
			}
		}
		else
		{
			if(!tab.contains(point))
			{
				if(eraserEnabled)
				{
					double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorEraserPoint;
					double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorEraserPoint;
					new FilledOval(x, y, eraserSize, eraserSize, canvas).setColor(chosenColor);
				}
				else
				{
					if(colorfunEnabled)
					{
						double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorBrushPoint;
						double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorBrushPoint;
						new FilledOval(x, y, brushSize, brushSize, canvas).setColor(new Color((int)(Math.random() * 256), (int)(Math.random() * 256), (int)(Math.random() * 256)));
					}
					else
					{
						double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorBrushPoint;
						double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorBrushPoint;
						new FilledOval(x, y, brushSize, brushSize, canvas).setColor(chosenColor);
					}
				}
			}
		}
	}

	public void onMouseMove(Location point)
	{
		if(!mouseEntered)
		{
			double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorBrushPoint;
			double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorBrushPoint;
			mouseBrushOutline = new FramedOval(x, y, brushSize, brushSize, canvas);

			double x2 = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorEraserPoint;
			double y2 = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorEraserPoint;
			mouseEraserOutline = new FramedOval(x2, y2, brushSize, brushSize, canvas);

			mouseEntered = true;
		}
		else
		{
			if(border.contains(point))
			{
				mouseEraserOutline.hide();
				mouseBrushOutline.hide();
			}
			else if(tab.contains(point))
			{
				mouseEraserOutline.hide();
				mouseBrushOutline.hide();
			}
			else
			{

				if(!eraserEnabled)
				{
					mouseEraserOutline.hide(); mouseBrushOutline.show(); mouseBrushOutline.sendToFront();
					double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorBrushPoint;
					double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorBrushPoint;
					mouseBrushOutline.moveTo(x, y);
				}
				else
				{
					mouseEraserOutline.setWidth(eraserSize); 
					mouseEraserOutline.setHeight(eraserSize); 
					
					mouseBrushOutline.hide(); mouseEraserOutline.show(); mouseEraserOutline.sendToFront();

					double x = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[0]) - cursorEraserPoint;
					double y = Double.parseDouble(point.toString().replace("Location[", "").replace("]", "").split(",")[1]) - cursorEraserPoint;
					mouseEraserOutline.moveTo(x, y);
				}
			}
		}
	}

	public void loadControls()
	{
		insideBorder = new FilledRect(1, 1, 148, 668, canvas); insideBorder.setColor(Color.white);
		border = new FramedRect(0, 0, 150, 670, canvas); //Rectangle border
		chosenColor = Color.black; // Default color

		eraserEnabled = false;
		colorfunEnabled = false;

		// ----------- tab -----------
		tab = new FilledRect(1, 1, 50, 20, canvas);
		tabText = new Text("Tab", 15, 3, canvas); tabText.setColor(Color.white); tabText.setBold();
		tabEnabled = false;
		
		// ----------- COLORS -----------
		colorsHeader = new Text("Colors", 55, 5, canvas); colorsHeader.setBold(); // Header
		currentColor = new Text("Current Color: Black", 18, 25, canvas); // Current color text

		blackColor = new FilledOval(25, 50, 30, 30, canvas); blackColor.setColor(Color.black); // Black
		blueColor = new FilledOval(85, 50, 30, 30, canvas); blueColor.setColor(Color.blue); // Blue
		
		redColor = new FilledOval(25, 100, 30, 30, canvas); redColor.setColor(Color.red); // Red
		greenColor = new FilledOval(85, 100, 30, 30, canvas); greenColor.setColor(Color.green); // Green
		
		orangeColor = new FilledOval(25, 150, 30, 30, canvas); orangeColor.setColor(Color.orange); // Orange
		yellowColor = new FilledOval(85, 150, 30, 30, canvas); yellowColor.setColor(Color.yellow); // Yellow

		pinkColor = new FilledOval(25, 200, 30, 30, canvas); pinkColor.setColor(Color.pink); // Pink
		magentaColor = new FilledOval(85, 200, 30, 30, canvas); magentaColor.setColor(Color.magenta); // Magenta

		// ----------- BRUSH SIZE -----------
		brushSizeHeader = new Text("Brush Size", 45, 250, canvas); brushSizeHeader.setBold(); // Header
		currentBrushSize = new Text("Current Brush Size: " + brushSize, 13, 270, canvas); // Current brush size text 

		//Increase brush size
		increaseBrushSize = new FilledRect(15, 300, 50, 50, canvas);
		increaseBrushSizeText = new Text("+", 20, 280, canvas);
		increaseBrushSizeText.setColor(Color.white); increaseBrushSizeText.setFontSize(70); increaseBrushSizeText.setBold();
		
		//Decrease brush size
		decreaseBrushSize = new FilledRect(85, 300, 50, 50, canvas);
		decreaseBrushSizeText = new Text("-", 93, 257, canvas);
		decreaseBrushSizeText.setColor(Color.white); decreaseBrushSizeText.setFontSize(90); decreaseBrushSizeText.setBold();

		// ----------- ERASER -----------
		eraserHeader = new Text("Eraser", 55, 370, canvas); eraserHeader.setBold(); // Header
		currentEraserSize = new Text("Current Eraser Size: " + eraserSize, 13, 388, canvas); // Current eraser size text

		eraser = new FilledRect(50, 410, 50, 50, canvas); eraser.setColor(Color.black);
		eraserOval = new FilledOval(60, 420, 30, 30, canvas); eraserOval.setColor(Color.white);

		//Increase eraser size
		increaseEraserSize = new FilledRect(15, 470, 50, 50, canvas);
		increaseEraserSizeText = new Text("+", 20, 450, canvas);
		increaseEraserSizeText.setColor(Color.white); increaseEraserSizeText.setFontSize(70); increaseEraserSizeText.setBold();

		//Decrease eraser size
		decreaseEraserSize = new FilledRect(85, 470, 50, 50, canvas);
		decreaseEraserSizeText = new Text("-", 93, 427, canvas);
		decreaseEraserSizeText.setColor(Color.white); decreaseEraserSizeText.setFontSize(90); decreaseEraserSizeText.setBold();

		// ----------- OTHER FUNCTIONS -----------
		otherFunctionsHeader = new Text("Other Functions", 33, 535, canvas); otherFunctionsHeader.setBold(); // Header
		
		// Clear All
		clearAll = new FilledRect(10, 555, 130, 35, canvas); 
		clearAllText = new Text("Clear All", 20, 555, canvas);
		clearAllText.setColor(Color.white); clearAllText.setFontSize(26); clearAllText.setBold();

		// Color Fun
		colorfun = new FilledRect(10, 600, 130, 35, canvas); 
		colorfunText = new Text("Color Fun", 14, 600, canvas);
		colorfunText.setColor(Color.white); colorfunText.setFontSize(26); colorfunText.setBold();

		// ----------- CREDITS -----------
		creditsText = new Text("Created by John Choi", 14, 640, canvas); creditsText.setBold();
	}

	public void enableTab()
	{
		insideBorder.moveTo(-1000, -1000);

		border.moveTo(-1000, -1000);

		currentColor.moveTo(-1000, -1000);
		currentBrushSize.moveTo(-1000, -1000);
		currentEraserSize.moveTo(-1000, -1000);

		blackColor.moveTo(-1000, -1000);
		blueColor.moveTo(-1000, -1000);
		redColor.moveTo(-1000, -1000);
		greenColor.moveTo(-1000, -1000);
		yellowColor.moveTo(-1000, -1000);
		pinkColor.moveTo(-1000, -1000);
		magentaColor.moveTo(-1000, -1000);
		orangeColor.moveTo(-1000, -1000);

		increaseBrushSize.moveTo(-1000, -1000);
		decreaseBrushSize.moveTo(-1000, -1000);

		increaseEraserSize.moveTo(-1000, -1000);
		decreaseEraserSize.moveTo(-1000, -1000);

		clearAll.moveTo(-1000, -1000);

		eraser.moveTo(-1000, -1000);

		colorsHeader.moveTo(-1000, -1000);
		brushSizeHeader.moveTo(-1000, -1000);
		eraserHeader.moveTo(-1000, -1000);
		otherFunctionsHeader.moveTo(-1000, -1000);
		creditsText.moveTo(-1000, -1000);

		eraserOval.moveTo(-1000, -1000);

		increaseBrushSizeText.moveTo(-1000, -1000);
		decreaseBrushSizeText.moveTo(-1000, -1000);
		increaseEraserSizeText.moveTo(-1000, -1000);
		decreaseEraserSizeText.moveTo(-1000, -1000);
		clearAllText.moveTo(-1000, -1000);

		colorfun.moveTo(-1000, -1000);
		colorfunText.moveTo(-1000, -1000);
	}

	public void disableTab()
	{
		insideBorder.moveTo(1, 1);

		border.moveTo(0, 0);

		currentColor.moveTo(18, 25);
		currentBrushSize.moveTo(13, 270);
		currentEraserSize.moveTo(13, 388);

		blackColor.moveTo(25, 50);
		blueColor.moveTo(85, 50);
		redColor.moveTo(25, 100);
		greenColor.moveTo(85, 100);
		yellowColor.moveTo(85, 150);
		pinkColor.moveTo(25, 200);
		magentaColor.moveTo(85, 200);
		orangeColor.moveTo(25, 150);

		increaseBrushSize.moveTo(15, 300);
		decreaseBrushSize.moveTo(85, 300);

		increaseEraserSize.moveTo(15, 470);
		decreaseEraserSize.moveTo(85, 470);

		clearAll.moveTo(10, 555);

		eraser.moveTo(50, 410);

		colorsHeader.moveTo(55, 5);
		brushSizeHeader.moveTo(45, 250);
		eraserHeader.moveTo(55, 370);
		otherFunctionsHeader.moveTo(33, 535);
		creditsText.moveTo(14, 640);

		eraserOval.moveTo(60, 420);

		increaseBrushSizeText.moveTo(20, 280);
		decreaseBrushSizeText.moveTo(93, 257);
		increaseEraserSizeText.moveTo(20, 450);
		decreaseEraserSizeText.moveTo(93, 427);
		clearAllText.moveTo(20, 555);

		colorfun.moveTo(10, 600);
		colorfunText.moveTo(14, 600);
	}

	public void bringControlsToFront()
	{
		insideBorder.sendToFront();

		border.sendToFront();

		tab.sendToFront();
		tabText.sendToFront();

		currentColor.sendToFront();
		currentBrushSize.sendToFront();
		currentEraserSize.sendToFront();

		blackColor.sendToFront();
		blueColor.sendToFront();
		redColor.sendToFront();
		greenColor.sendToFront();
		yellowColor.sendToFront();
		pinkColor.sendToFront();
		magentaColor.sendToFront();
		orangeColor.sendToFront();
		yellowColor.sendToFront();
		pinkColor.sendToFront();
		magentaColor.sendToFront();

		increaseBrushSize.sendToFront();
		decreaseBrushSize.sendToFront();

		increaseEraserSize.sendToFront();
		decreaseEraserSize.sendToFront();

		clearAll.sendToFront();

		eraser.sendToFront();

		colorsHeader.sendToFront();
		brushSizeHeader.sendToFront();
		eraserHeader.sendToFront();
		otherFunctionsHeader.sendToFront();
		creditsText.sendToFront();

		eraserOval.sendToFront();

		increaseBrushSizeText.sendToFront();

		decreaseBrushSizeText.sendToFront();

		increaseEraserSizeText.sendToFront();

		decreaseEraserSizeText.sendToFront();

		clearAllText.sendToFront();

		colorfun.sendToFront();
		colorfunText.sendToFront();
	}

}