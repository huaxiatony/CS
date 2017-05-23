class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
	// Define a reference to an EasyReader object
		EasyReader console;
		int guess;
		double answer;
		int answer2;
	// Construct an EasyReader object
		console = new EasyReader();
		System.out.print("Please guess a number from 1 to 1000: ");
		guess = console.readInt();
		answer = Math.random()*1000;
		answer2 = (int)answer;
		if(guess == answer2)
		{
			System.out.print("Correct!");
		}
		else 
		{
			System.out.print("Sorry, the answer was:" + answer2);
		}
        }
}
