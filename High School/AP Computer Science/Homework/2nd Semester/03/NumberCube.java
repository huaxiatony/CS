public class NumberCube 
{
    public NumberCube() 
	{
		
	}
	public int toss() 
	{
		int randomNumber = (int)(Math.random()*6); 
		return randomNumber; 
	}
	public static int[] getCubeTosses(NumberCube cube , int numTosses)
	{
		int[] arr = new int[numTosses]; 
		for(int i = 0; i < numTosses; i++) 
		{
			arr[i] = cube.toss(); 
		}
		return arr; 
	}
	public static int getLongestRun(int[] values) 
	{
		 int currentLength = 0, maxLength = 0, maxStart = -1;
		 for (int i = 0; i < values.length-1; i++)
		 {
		 if (values[i] == values[i+1])
		 {
		 currentLength++;
		 if (currentLength > maxLength)
		 {
		 maxLength = currentLength;
		 maxStart = i - currentLength + 1;
		 }
		 }
		 else
		 {
		 currentLength = 0;
		 }
		 }
		 return maxStart; 
		
		
	}
	public String toString()
	{
		return "The number cube contains the number(s): ";
	}
}
