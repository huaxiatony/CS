class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		console = new EasyReader();
		System.out.print("What year was the War of 1812 fought?: ");
		attempt = console.readWord();
		if(attempt.equals("1812"))
		{
			System.out.print("Correct!");
		}
		else if(attempt.equals("1813"))
		{
			System.out.print("Sorry, try again");
		}
		else if(attempt.equals("1811"))
		{
			System.out.print("Sorry, try again");
		}
		else
		{
			System.out.print("Sorry, try again");
		}
        }
}
