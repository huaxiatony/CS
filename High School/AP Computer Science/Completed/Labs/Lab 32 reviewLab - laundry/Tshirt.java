import objectdraw.*;
import java.awt.*;

// A class that defines a graphical type that looks a bit
// like a t-shirt
public class Tshirt implements Laundry {

        // constants to define the size of the shirt
        private static final double SIZE = 120;

        private static final double SLEEVE_WIDTH = SIZE;
        private static final double SLEEVE_HEIGHT = 0.2*SIZE;

        private static final double BODY_WIDTH = 0.6*SIZE;
        private static final double BODY_HEIGHT = (0.65)*SIZE;

        private static final double BODY_INSET = 0.2*SIZE;

        private static final double NECK_WIDTH = 0.3*SIZE;
        private static final double NECK_HEIGHT = 0.06*SIZE;

        private static final double NECK_INSET = 0.35*SIZE;

        // rectangles that form a border around the shirt
        private FramedRect sleeveTrim, bodyTrim;
        private FramedOval neckTrim;

        // rectangles that form the interior color of the shirt
        private FilledRect body, sleeves;
        private FilledOval neck;

        // Current color of the shirt
        private Color hue;

          // Random number generator used to select next object
        private RandomIntGenerator generator = new RandomIntGenerator(0,255);

        // create a new T-shirt with its upper left corner at (x,y) and with
        // a width of size.
        public Tshirt( double x, double y, DrawingCanvas canvas ) {
                // create boundary rectangles
                sleeveTrim = new FramedRect( x, y + NECK_HEIGHT/2, SLEEVE_WIDTH, SLEEVE_HEIGHT, canvas);
                bodyTrim = new FramedRect( x + BODY_INSET, y + NECK_HEIGHT/2, BODY_WIDTH, BODY_HEIGHT, canvas);

                // create interior rectangles
                sleeves = new FilledRect( x+1, y+NECK_HEIGHT/2+1, SLEEVE_WIDTH-1, SLEEVE_HEIGHT-1, canvas);
                body = new FilledRect( x+BODY_INSET+1, y+NECK_HEIGHT/2+1, BODY_WIDTH-1, BODY_HEIGHT-1, canvas);

                // give it a neck hole
                neck = new FilledOval( x + NECK_INSET, y, NECK_WIDTH, NECK_HEIGHT, canvas);
                neckTrim = new FramedOval( x + NECK_INSET, y, NECK_WIDTH, NECK_HEIGHT, canvas);

                // set the interior color
                setColor();
        }

        // move the t-shirt by specified offsets.
        public void move( double xOffset, double yOffset ) {
                body.move(xOffset,yOffset);
                neck.move(xOffset,yOffset);
                sleeves.move(xOffset,yOffset);
                bodyTrim.move(xOffset,yOffset);
                sleeveTrim.move(xOffset,yOffset);
                neckTrim.move(xOffset,yOffset);
        }

        // hide the t-shirt from sight.
        public void hide(  ) {
                body.hide();
                neck.hide();
                sleeves.hide();
                bodyTrim.hide();
                sleeveTrim.hide();
                neckTrim.hide();
        }

        // move the t-shirt to a new upper-left coordinate position
        public void moveTo( double x, double y) {
                move( x - sleeves.getX(), y - neck.getY());
        }

        // returns true if the t-shirt contains the point; false otherwise
        public boolean contains( Location pt) {
                return body.contains(pt) || sleeves.contains(pt) || neck.contains(pt);

        }

        // pick a new random color for the shirt
        private void setColor( ) {

                hue = new Color( generator.nextValue(),
                                                 generator.nextValue(),
                                                 generator.nextValue()
                                                 );

                body.setColor(hue);
                sleeves.setColor(hue);
                neck.setColor(hue);
        }

        // get the sum of the components of the shirt's color
        public int colorValue(  ) {
                return hue.getRed() + hue.getBlue() + hue.getGreen();
        }
		
		
}


