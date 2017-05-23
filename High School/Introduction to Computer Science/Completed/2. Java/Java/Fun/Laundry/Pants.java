import objectdraw.*;
import java.awt.*;

// A class that defines a graphical type that looks a bit
// like pants
public class Pants implements Laundry {

        private static final double SIZE = 90;

        private static final double HIP_WIDTH = SIZE / 3;
        private static final double HIP_HEIGHT = SIZE / 3;

        private static final double LEG_WIDTH = HIP_WIDTH / 2 - 3;
        private static final double LEG_HEIGHT = SIZE - HIP_HEIGHT;

        // rectangles that form a border around
        private FramedRect leftLegTrim, rightLegTrim, hipTrim;

        // rectangles that form the interior color
        private FilledRect leftLeg, rightLeg, hips;

        // the initial location of the pants
        private double startX, startY;

        // Current color of the pants
        private Color hue;

          // Random number generator used to select colors
        private RandomIntGenerator generator = new RandomIntGenerator(0,255);

        // create a new pair of pants with its upper left corner at (x,y) and with
        // a length of size.
        public Pants( double x, double y, DrawingCanvas canvas ) {

                // create boundary rectangles
                leftLegTrim = new FramedRect( x, y + HIP_HEIGHT, LEG_WIDTH, LEG_HEIGHT, canvas);
                rightLegTrim = new FramedRect( x + HIP_WIDTH - LEG_WIDTH, y + HIP_HEIGHT, LEG_WIDTH, LEG_HEIGHT, canvas);
                hipTrim = new FramedRect( x, y, HIP_WIDTH, HIP_HEIGHT, canvas);

                // create interior rectangles
                leftLeg = new FilledRect( x+1, y+HIP_HEIGHT-1, LEG_WIDTH-1, LEG_HEIGHT+1, canvas);
                rightLeg = new FilledRect( x+HIP_WIDTH-LEG_WIDTH+1, y+HIP_HEIGHT-1, LEG_WIDTH-1, LEG_HEIGHT+1, canvas);
                hips = new FilledRect( x+1, y+1, HIP_WIDTH-1, HIP_HEIGHT-1, canvas);

                // remember the starting location for re-set
                startX = x;
                startY = y;

                setColor();
        }

        // move the pants by specified offsets.
        public void move( double xOffset, double yOffset ) {
                hips.move(xOffset,yOffset);
                leftLeg.move(xOffset,yOffset);
                rightLeg.move(xOffset,yOffset);
                hipTrim.move(xOffset,yOffset);
                leftLegTrim.move(xOffset,yOffset);
                rightLegTrim.move(xOffset,yOffset);
        }

        // move the pants to a specific position.
        public void moveTo( double x, double y) {
                move( x - hips.getX(), y - hips.getY() );
        }

        public void hide () {
                hips.hide ();
                leftLeg.hide ();
                rightLeg.hide ();
                hipTrim.hide ();
                leftLegTrim.hide ();
                rightLegTrim.hide ();
        }

        // returns true if the pants contains the point; false otherwise
        public boolean contains( Location pt) {
                return hips.contains(pt) || leftLeg.contains(pt) || rightLeg.contains(pt);

        }

        // pick a new random color for the pants
        private void setColor( ) {
                hue = new Color( generator.nextValue(),
                                                 generator.nextValue(),
                                                 generator.nextValue()
                                                 );

                hips.setColor(hue);
                leftLeg.setColor(hue);
                rightLeg.setColor(hue);
        }

        // get the sum of the components of the pant's color
        public int colorValue(  ) {
                return hue.getRed() + hue.getBlue() + hue.getGreen();
        }
}




