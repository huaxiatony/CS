class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String noun;
		String adj;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		console = new EasyReader();
		System.out.print("Please enter a noun: ");
		noun = console.readLine();
		System.out.print("Please enter an adjective: ");
		adj = console.readLine();
		System.out.print("The" + adj + "banana ate the" + noun);
        }
}
