		class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		console = new EasyReader();
		System.out.println("Please enter a plural noun:");
		String plural = console.readLine();
		System.out.println("Please enter a singular noun:");
		String singul = console.readLine();
		System.out.println("Please enter a present tense verb:");
		String present = console.readLine();
		System.out.println("Please enter an animal:");
		String animal = console.readLine();
		System.out.println("Please enter an adjective:");
		String adj = console.readLine();
		System.out.println("Please enter a noun");
		String noun = console.readLine();
		System.out.println("Please enter your favorite food:");
		String food = console.readLine();
		System.out.println("Please enter the name of a famous person:");
		String person = console.readLine();
		System.out.println("Please enter a verb:");
		String verb = console.readLine();
		
		System.out.println("Two " + plural + " don't make a " + singul);
		System.out.println("Never " + present + " with an " + animal);
		System.out.println(present + " while you're ahead");
		System.out.println("One " + adj + " deserves another");
		System.out.println("A " + singul + " deserves another");
		System.out.println("The early " + animal + " catches the " + noun);
		System.out.println("A " + food + " a day keeps the " + person + " away");
		System.out.println(plural + " of a feather " + verb + " together");
		System.out.println("You can bring a " + animal + " to water, but you can't make it " + verb);
        }
}
