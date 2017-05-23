/**
 * This is a class that tests the Deck class.
 */
public class temp {
	/**
	 * The main method in this class checks the Deck operations for consistency.
	 *	@param args is not used.
	 */
	public static void main(String[] args) {
		String[] ranks = {"A","B","C"};
		String[] suits ={"Giraffes","Lions"};
		int[] values = {2,1,6};
		Deck joe = new Deck(ranks,suits,values);
		System.out.println(joe);
		System.out.println(joe.isEmpty());
		System.out.println(joe.size());
		System.out.println(joe.deal());
		System.out.println(joe);
	}
}


// E:\AP Comp Sci\Completed\Labs\Lab 42 elevesn Deck class>java -cp ; temp
// size = 0
// Undealt cards:

// Dealt cards:
// C of Lions(point value = 6)., B of Giraffes(point value = 1).,
// A of Lions(point value = 2).

// false
// 3
// C of Lions(point value = 6).
// size = 0
// Undealt cards:

// Dealt cards:
// C of Lions(point value = 6)., B of Giraffes(point value = 1).,
// A of Lions(point value = 2).


// E:\AP Comp Sci\Completed\Labs\Lab 42 elevesn Deck class>pause
// Press any key to continue . . .
