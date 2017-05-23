class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
	
		String happy = new String("Happy");
		String bday = new String("Birthday,");
		String toyou = new String(" to you");
	
		console = new EasyReader();
		System.out.print("What is the name of the person?");
		attempt = console.readLine();
		
		System.out.println(happy + bday + toyou);
		System.out.println(happy + bday + toyou);
		System.out.println(happy + bday + attempt);
		System.out.println(happy + bday + toyou);
		
		
		
        }
}
