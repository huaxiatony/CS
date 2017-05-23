/**
 * This class provides a convenient way to test shuffling methods.
 */
import java.util.List;
import java.util.ArrayList;
public class starter {

	/**
	 * Tests shuffling methods.
	 * @param args is not used.
	 */
	public static void main(String[] args) 
	{
		int value_count = 4;
		int shuffle_count = 3;
		
		System.out.println("Results of " + shuffle_count + " consecutive shuffles:");
		ArrayList<Integer> values2 = new ArrayList<Integer>();
		for (int i = 0; i < value_count; i++) 
		{
			Integer j = new Integer(i);
			values2.add(j);
		}
		System.out.println(values2);
		for (int j = 1; j <= shuffle_count; j++) 
		{
			shuffler(values2);
			System.out.print("  " + j + ":");
			System.out.print(values2);
			System.out.println();
		}
		System.out.println();
	}


	/**
	 * 
	 * @param values is an ArrayList of Integers simulating cards to be shuffled.
	 */
	public static void shuffler(ArrayList<Integer> values2) 
	{
		// put your code here
		int randInt, size = values2.size();
		ArrayList<Integer> newList = new ArrayList<Integer>();
		for(int i = 0; i < values2.size(); i++) 
		{
			newList.add(i,values2.get(i));
		}
		for(int l = 0; l < values2.size(); l++)
		{
			randInt = (int)(Math.random()*size);
			values2.set(l,newList.get(randInt));
			newList.remove(randInt);
			size--;
		}
	}
}
