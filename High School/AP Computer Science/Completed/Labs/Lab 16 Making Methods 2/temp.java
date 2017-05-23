class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
		String sentence;
		int x;
		String output;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		console = new EasyReader();
		System.out.println("Please enter a sentence: ");
		sentence = console.readLine();
		findIt(sentence, "the");
		
        }
		
		private static void findIt(String input, String search){
			if(input.indexOf(search) > -1)
			{
				System.out.print("Found it!");
			}
			else
			{
				System.out.print("The word 'the' was never found.");
			}
		}		
}
