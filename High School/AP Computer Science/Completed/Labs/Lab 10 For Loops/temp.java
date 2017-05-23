class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		console = new EasyReader();
		int count = 0;
		int num_times = 10;
		int word;
		System.out.print("Please enter a number: ");
		word = console.readInt();
		for(count = 0; count <= word; count++)
		{
			System.out.println(count);
		}
        }
}
