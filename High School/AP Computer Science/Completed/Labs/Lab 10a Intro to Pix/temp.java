class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		console = new EasyReader();
		System.out.print("Please enter a value");
		attempt = console.readLine();
		System.out.println("");
		System.out.println("");
		System.out.print("The value you entered was: "+attempt);
        }
}
