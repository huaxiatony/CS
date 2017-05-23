// v2.0 - 3/21/05 - getX(), getY(), moveTo(), getColor(), setColor()

import objectdraw.*;
import java.awt.*;

public class Waldo
{
	// Noggin Stuff
	private FilledRect Noggin;
	private FramedRect NogginOutline;

	private Line[] hat = new Line[15];
	private FilledRect hatColl;

	private FilledOval poof;
	private FramedOval poofOutline;

	private FilledRect Eyes, PupilOne, PupilTwo;

	private FramedRect LenseOne, LenseTwo;
	private FilledRect thing1, thing2;

	private Line mouth1, mouth2;

	// TorsoStuff
	private FilledRect neck, body, arms1, arms2, hand1, hand2;
	private FilledRect[] stripes = new FilledRect[9];

	// Lower Body
	private FilledRect seat, leg1, leg2, foot1, foot2;

	// colors
	private Color skinColor = new Color( 255, 194, 166 );
	private Color brownColor = new Color( 128, 64, 0 );



	public Waldo( double x, double y, DrawingCanvas canvas )
	{
		makeWaldo( x, y, canvas );
	}

	public Waldo( double x, double y, boolean bHidden, DrawingCanvas canvas )
	{
		if ( bHidden )
			makeHiddenWaldo( x, y, canvas );
		else
			makeWaldo( x, y, canvas );	
	}

	public Waldo( Location loc, DrawingCanvas canvas )
	{
		makeWaldo( loc.getX(), loc.getY(), canvas );
	}

	public Waldo( Location loc, boolean bHidden, DrawingCanvas canvas )
	{
		if ( bHidden )
			makeHiddenWaldo( loc.getX(), loc.getY(), canvas );
		else
			makeWaldo( loc.getX(), loc.getY(), canvas );
	}


	private void makeWaldo( double x, double y, DrawingCanvas canvas )
	{
		///////////////////////////////////////////////////////////////
		// Noggin Stuff
		///////////////////////////////////////////////////////////////

		// head
		Noggin = new FilledRect( x, y, 15, 15, canvas );
		Noggin.setColor( skinColor );

		// hat
		for( int i=0; i<15; i++ )
		{
			hat[i] = new Line( x+7, y-12, x+i, y-1, canvas );
			hat[i].setColor( Color.red );
		}

		hatColl = new FilledRect( x+1.5, y-12, 11, 13, canvas );
		hatColl.hide();

		poof = new FilledOval( x+4, y-15, 6, 6, canvas );
		poof.setColor( Color.white );
		poofOutline = new FramedOval( x+4, y-15, 6, 6, canvas );

		// eyes
		Eyes = new FilledRect( x+2, y+3, 11, 4, canvas );
		Eyes.setColor( Color.white );
		PupilOne = new FilledRect( x+4, y+4, 2, 2, canvas );
		PupilTwo = new FilledRect( x+9, y+4, 2, 2, canvas );

		// glasses
		LenseOne = new FramedRect( x+2, y+3, 5, 4, canvas );
		LenseTwo = new FramedRect( x+7, y+3, 5, 4, canvas );
		thing1 = new FilledRect( x, y+3, 2, 2, canvas );
		thing2 = new FilledRect( x+13, y+3, 2, 2, canvas );

		// mouth
		mouth1 = new Line( x+4, y+13, x+9, y+13, canvas );
		mouth2 = new Line( x+9, y+13, x+12, y+12, canvas );


		///////////////////////////////////////////////////////////////
		// Torso Stuff
		///////////////////////////////////////////////////////////////

		// neck
		neck = new FilledRect( x+3, y+15, 8, 5, canvas );
		neck.setColor( skinColor );

		// torso
		body = new FilledRect( x-2, y+28, 18, 20, canvas );
		body.setColor( Color.red );

		// arms
		arms1 = new FilledRect( x-17, y+20, 63, 8, canvas );
		arms1.setColor( Color.red );
		arms2 = new FilledRect( x-17, y+3, 8, 17, canvas );
		arms2.setColor( Color.red );

		// stripes!
		stripes[0] = new FilledRect( x-17, y+7, 8, 4, canvas );
		stripes[1] = new FilledRect( x-17, y+15, 8, 4, canvas );
		stripes[2] = new FilledRect( x-8, y+20, 4, 8, canvas );
		stripes[3] = new FilledRect( x+17, y+20, 4, 8, canvas );
		stripes[4] = new FilledRect( x+27, y+20, 4, 8, canvas );
		stripes[5] = new FilledRect( x+37, y+20, 4, 8, canvas );
		stripes[6] = new FilledRect( x-2, y+28, 18, 4, canvas );
		stripes[7] = new FilledRect( x-2, y+38, 18, 4, canvas );
		stripes[8] = new FilledRect( x-2, y+48, 18, 4, canvas );

		for( int i=0; i<stripes.length; i++ )
			stripes[i].setColor( Color.white );

		// hands
		hand1 = new FilledRect( x-17, y-5, 8, 8, canvas );
		hand1.setColor( skinColor );
		hand2 = new FilledRect( x+46, y+20, 8, 8, canvas );
		hand2.setColor( skinColor );


		///////////////////////////////////////////////////////////////
		// Lower Body
		///////////////////////////////////////////////////////////////

		// pants
		seat = new FilledRect( x-2, y+52, 18, 5, canvas );
		seat.setColor( Color.blue );
		// legs
		leg1 = new FilledRect( x-2, y+57, 7, 20, canvas );
		leg1.setColor( Color.blue );
		leg2 = new FilledRect( x+9, y+57, 7, 20, canvas );
		leg2.setColor( Color.blue );

		// feet
		foot1 = new FilledRect( x-8, y+77, 13, 8, canvas );
		foot1.setColor( brownColor );
		foot2 = new FilledRect( x+9, y+77, 13, 8, canvas );
		foot2.setColor( brownColor );
	}

	private void makeHiddenWaldo( double x, double y, DrawingCanvas canvas )
	{
		// really ugly to have all this repeated, but to make sure you can't watch
		// Waldo get drawn (slow the first time, seems fast after that) we gotta hide
		// wach piece right after it's made

		///////////////////////////////////////////////////////////////
		// Noggin Stuff
		///////////////////////////////////////////////////////////////

		// head
		Noggin = new FilledRect( x, y, 15, 15, canvas );
		Noggin.hide();
		Noggin.setColor( skinColor );

		// hat
		for( int i=0; i<15; i++ )
		{
			hat[i] = new Line( x+7, y-12, x+i, y-1, canvas );
			hat[i].hide();
			hat[i].setColor( Color.red );
		}

		hatColl = new FilledRect( x+1.5, y-12, 11, 13, canvas );
		hatColl.hide();

		poof = new FilledOval( x+4, y-15, 6, 6, canvas );
		poof.hide();
		poof.setColor( Color.white );
		poofOutline = new FramedOval( x+4, y-15, 6, 6, canvas );
		poofOutline.hide();

		// eyes
		Eyes = new FilledRect( x+2, y+3, 11, 4, canvas );
		Eyes.hide();
		Eyes.setColor( Color.white );
		PupilOne = new FilledRect( x+4, y+4, 2, 2, canvas );
		PupilOne.hide();
		PupilTwo = new FilledRect( x+9, y+4, 2, 2, canvas );
		PupilTwo.hide();

		// glasses
		LenseOne = new FramedRect( x+2, y+3, 5, 4, canvas );
		LenseOne.hide();
		LenseTwo = new FramedRect( x+7, y+3, 5, 4, canvas );
		LenseTwo.hide();
		thing1 = new FilledRect( x, y+3, 2, 2, canvas );
		thing1.hide();
		thing2 = new FilledRect( x+13, y+3, 2, 2, canvas );
		thing2.hide();

		// mouth
		mouth1 = new Line( x+4, y+13, x+9, y+13, canvas );
		mouth1.hide();
		mouth2 = new Line( x+9, y+13, x+12, y+12, canvas );
		mouth2.hide();


		///////////////////////////////////////////////////////////////
		// Torso Stuff
		///////////////////////////////////////////////////////////////

		// neck
		neck = new FilledRect( x+3, y+15, 8, 5, canvas );
		neck.hide();
		neck.setColor( skinColor );

		// torso
		body = new FilledRect( x-2, y+28, 18, 20, canvas );
		body.hide();
		body.setColor( Color.red );

		// arms
		arms1 = new FilledRect( x-17, y+20, 63, 8, canvas );
		arms1.hide();
		arms1.setColor( Color.red );
		arms2 = new FilledRect( x-17, y+3, 8, 17, canvas );
		arms2.hide();
		arms2.setColor( Color.red );

		// stripes!
		stripes[0] = new FilledRect( x-17, y+7, 8, 4, canvas );
		stripes[0].hide();
		stripes[1] = new FilledRect( x-17, y+15, 8, 4, canvas );
		stripes[1].hide();
		stripes[2] = new FilledRect( x-8, y+20, 4, 8, canvas );
		stripes[2].hide();
		stripes[3] = new FilledRect( x+17, y+20, 4, 8, canvas );
		stripes[3].hide();
		stripes[4] = new FilledRect( x+27, y+20, 4, 8, canvas );
		stripes[4].hide();
		stripes[5] = new FilledRect( x+37, y+20, 4, 8, canvas );
		stripes[5].hide();
		stripes[6] = new FilledRect( x-2, y+28, 18, 4, canvas );
		stripes[6].hide();
		stripes[7] = new FilledRect( x-2, y+38, 18, 4, canvas );
		stripes[7].hide();
		stripes[8] = new FilledRect( x-2, y+48, 18, 4, canvas );
		stripes[8].hide();

		for( int i=0; i<stripes.length; i++ )
			stripes[i].setColor( Color.white );

		// hands
		hand1 = new FilledRect( x-17, y-5, 8, 8, canvas );
		hand1.hide();
		hand1.setColor( skinColor );
		hand2 = new FilledRect( x+46, y+20, 8, 8, canvas );
		hand2.hide();
		hand2.setColor( skinColor );


		///////////////////////////////////////////////////////////////
		// Lower Body
		///////////////////////////////////////////////////////////////

		// pants
		seat = new FilledRect( x-2, y+52, 18, 5, canvas );
		seat.hide();
		seat.setColor( Color.blue );
		// legs
		leg1 = new FilledRect( x-2, y+57, 7, 20, canvas );
		leg1.hide();
		leg1.setColor( Color.blue );
		leg2 = new FilledRect( x+9, y+57, 7, 20, canvas );
		leg2.hide();
		leg2.setColor( Color.blue );

		// feet
		foot1 = new FilledRect( x-8, y+77, 13, 8, canvas );
		foot1.hide();
		foot1.setColor( brownColor );
		foot2 = new FilledRect( x+9, y+77, 13, 8, canvas );
		foot2.hide();
		foot2.setColor( brownColor );
	}


	public double getX()
	{
		return Noggin.getX();
	}

	public double getY()
	{
		return Noggin.getY();
	}

	public void hide()
	{
		Noggin.hide();

		for( int i=0; i<15; i++ )
			hat[i].hide();

		poof.hide();
		poofOutline.hide();
		Eyes.hide();
		PupilOne.hide();
		PupilTwo.hide();
		LenseOne.hide();
		LenseTwo.hide();
		thing1.hide();
		thing2.hide();
		mouth1.hide();
		mouth2.hide();
		neck.hide();
		body.hide();
		arms1.hide();
		arms2.hide();

		for( int i=0; i<9; i++ )
			stripes[i].hide();

		hand1.hide();
		hand2.hide();
		seat.hide();
		leg1.hide();
		leg2.hide();
		foot1.hide();
		foot2.hide();
	}

	public void show()
	{
		Noggin.show();

		for( int i=0; i<15; i++ )
			hat[i].show();

		poof.show();
		poofOutline.show();
		Eyes.show();
		PupilOne.show();
		PupilTwo.show();
		LenseOne.show();
		LenseTwo.show();
		thing1.show();
		thing2.show();
		mouth1.show();
		mouth2.show();
		neck.show();
		body.show();
		arms1.show();
		arms2.show();

		for( int i=0; i<9; i++ )
			stripes[i].show();

		hand1.show();
		hand2.show();
		seat.show();
		leg1.show();
		leg2.show();
		foot1.show();
		foot2.show();
	}

	public void move( double x, double y )
	{
		Noggin.move( x, y );

		for( int i=0; i<15; i++ )
			hat[i].move( x, y );

		hatColl.move( x, y );
		poof.move( x, y );
		poofOutline.move( x, y );
		Eyes.move( x, y );
		PupilOne.move( x, y );
		PupilTwo.move( x, y );
		LenseOne.move( x, y );
		LenseTwo.move( x, y );
		thing1.move( x, y );
		thing2.move( x, y );
		mouth1.move( x, y );
		mouth2.move( x, y );
		neck.move( x, y );
		body.move( x, y );
		arms1.move( x, y );
		arms2.move( x, y );

		for( int i=0; i<9; i++ )
			stripes[i].move( x, y );

		hand1.move( x, y );
		hand2.move( x, y );
		seat.move( x, y );
		leg1.move( x, y );
		leg2.move( x, y );
		foot1.move( x, y );
		foot2.move( x, y );
	}

	public void moveTo( double x, double y )
	{
		move( x-getX(), y-getY() );
	}

	public void moveTo( Location point )
	{
		moveTo( point.getX(), point.getY() );
	}

	public Color getColor()
	{
		return hat[0].getColor();
	}

	public void setColor( Color newColor )
	{
		for( int i=0; i<15; i++ )
			hat[i].setColor( newColor );

		body.setColor( newColor );
		arms1.setColor( newColor );
		arms2.setColor( newColor );
	}

	public boolean contains( Location point )
	{
		return Noggin.contains(point) || poofOutline.contains(point) ||
		       hatColl.contains(point) || neck.contains(point) || body.contains(point) ||
		       arms1.contains(point) || arms2.contains(point) || hand1.contains(point) ||
		       hand2.contains(point) || seat.contains(point) || leg1.contains(point) ||
		       leg2.contains(point) || foot1.contains(point) || foot2.contains(point);
	}
}