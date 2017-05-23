import java.util.Scanner;

/**
 * A simple class to run the Magpie class.
 * @author Laurie White
 * @version April 2012
 */
public class starter
{
	/**
	 * Create a Magpie, give it user input, and print its replies.
	 */
	public static void main(String[] args)
	{
		String state = "Statement: ";
		String mag = "Magpie: ";
		Magpie3 maggie = new Magpie3();
		// System.out.print(maggie.findKeyword("I love pizza","hate"));
		System.out.println (mag + maggie.getGreeting());
		EasyReader in = new EasyReader();
		System.out.print(state);
		String statement = in.readLine();
		
		while (!statement.equals("Bye") && !statement.equals("bye"))
		{
			System.out.println (mag + maggie.getResponse(statement));
			System.out.print(state);
			statement = in.readLine();
		}
		
	}

}
