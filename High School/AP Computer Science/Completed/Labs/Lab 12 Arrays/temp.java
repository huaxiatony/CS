class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
	// Define a reference to an EasyReader object
		EasyReader console;
		// int a; 
		// int b;
		// int c;
		// int d; 
		// int e;
		// int f;
		// int g;
	// Construct an EasyReader object
		console = new EasyReader();
		// int[] ave = (a,b,c,d,e,f,g);
		int[] score = new int[7];
		
		System.out.print("Please enter a score that ranges from 1-10: ");
		score[0] = console.readInt();
		System.out.print("Please enter a second score: ");
		score[1] = console.readInt();
		System.out.print("Please enter a third score: ");
		score[2] = console.readInt();
		System.out.print("Please enter a fourth score: ");
		score[3] = console.readInt();
		System.out.print("Please enter a fifth score: ");
		score[4] = console.readInt();
		System.out.print("Please enter a sixth score: ");
		score[5] = console.readInt();
		System.out.print("Please enter a seventh score: ");
		score[6] = console.readInt();
		
		int max = score[0];
		for(int x = 0; x < score.length; x++)
		{
			if(max < score[x])
			{
				max = score[x];
			}
		}
		
		int min = score[0];
		for(int x = 0; x < score.length; x++)
		{
			if(min > score[x])
			{
				min = score[x];
			}
		}
		
		int sum = 0;
		for(int x1 = 0; x1 < score.length; x1++)
		{
			sum = sum + score[x1];
		}
		int avg = (sum - max - min)/5;
		System.out.println("Highest score is: " + max);
		System.out.println("The lowest score is: " + min);
		System.out.println("The average score is: " + avg);
        }
}
