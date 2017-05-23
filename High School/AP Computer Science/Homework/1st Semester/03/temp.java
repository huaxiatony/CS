class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		console = new EasyReader();
		int[] score = new int[3];
		for(int x = 0; x < 3; x++)
		{
			score[x] = (int)(Math.random()*50);
			
		}
		int min = score[0];
		for(int x = 0; x < score.length; x++)
		{
			if(min > score[x])
			{
				min = score[x];
			}
		}
		System.out.println("The three numbers are: "+ score[0] + " " + score[1] + " " + score[2]);
		System.out.println("The smallest value is: " + min);
        }
}


// C:\Users\blee7196\Desktop\HW\03>java -cp ; temp
// The three numbers are: 17 48 37
// The smallest value is: 17

// C:\Users\blee7196\Desktop\HW\03>pause
// Press any key to continue . . .