class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		int number;
		int temp;
		console = new EasyReader();
		System.out.print("Please enter how long you want the array to be: ");
		number = console.readInt();
		int [] numbers = new int[number];
		System.out.print("Here are the original array numbers: ");
		for(int x = 0; x < numbers.length; x++)
		{
			numbers[x] = (int)(Math.random()*9);
			System.out.print(numbers[x] + " ");
		}
		System.out.println(" ");
		System.out.print("The new array is: ");
		for(int i = 0; i < numbers.length-1; i++)
		{
			if(numbers[i] == 0)
			{
				// zero = numbers[i];
				temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
			}
			System.out.print(numbers[i] + " "); 
			
		}
		System.out.print(numbers[numbers.length-1]); 

		
        }
}
