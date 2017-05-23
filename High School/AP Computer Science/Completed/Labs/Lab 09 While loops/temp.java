class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
		int guess;
		double answer;
		int answer2;
		int x = 0;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		console = new EasyReader();
		System.out.print("Please guess a number from 1 to 1000: ");
		answer = Math.random()*1000;
		answer2 = (int)answer;
		while(x == 0)
		{
			guess = console.readInt();
			if(guess == answer2)
			{
				System.out.print("Correct!");
				x = x + 1;
			}
			else if(guess < answer2)
			{
				System.out.println("Sorry, the answer was too low");
				System.out.print("Guess another number from 1 to 1000: ");
			}
			else if(guess > answer2)
			{
				System.out.println("Sorry, the answer was too high");
				System.out.print("Guess another number from 1 to 1000: ");
			}
        }
}
}