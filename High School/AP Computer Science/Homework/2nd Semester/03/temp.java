
public class temp {

	public static void main(String[] args) {
		NumberCube ben = new NumberCube(); 
		int[] arr = NumberCube.getCubeTosses(ben,10);
		for(int i = 0; i < 10; i++)
		{
			System.out.print(arr[i] + " "); 
		}
		System.out.println();
		System.out.println(NumberCube.getLongestRun(arr));
	
		

	}

}

//<terminated> temp [Java Application] C:\Program Files (x86)\Java\jre1.8.0_71\bin\javaw.exe (Jan 28, 2016, 5:30:20 PM)
//2 5 2 3 2 2 5 3 4 1 
//4