import java.util.*;
public class NumberTile {
	//1st element = Top number, 2nd element = Right number, 3rd element = Bottom number, 4th element = Left number. 
	private ArrayList<Integer> num; 
	public NumberTile(int top, int right, int bottom, int left)
	{
		num=new ArrayList<Integer>();
		
		num.add(0, top);
		num.add(1, right);
		num.add(2, bottom);
		num.add(3, left);
	}

	public void rotate()
	{
		int temp1=num.get(0), temp2=num.get(1), temp3=num.get(2), temp4=num.get(3); 
		num.set(1, temp1);
		num.set(2, temp2);
		num.set(3, temp3);
		num.set(0, temp4);
	}
	
	public int getLeft()
	{
		return num.get(3);
	}
	
	public int getRight()
	{
		return num.get(1);
	}
	@Override
	public String toString()
	{
		return "Tile Numbers: " + num; 
	}
}