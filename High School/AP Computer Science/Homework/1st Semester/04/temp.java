class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
		String question;
		int time; 
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		console = new EasyReader();
		System.out.print("What is your name?: ");
		question = console.readLine();
		System.out.print("How many times do you want to see your name?: ");
		time = console.readInt();
		for(int i = 0; i < time; i++)
		{
			System.out.println(question);
		}
        }
}


// C:\Users\blee7196\Desktop\HW\04>java -cp ; temp
// What is your name?: Ben
// How many times do you want to see your name?: 4
// Ben
// Ben
// Ben
// Ben

// C:\Users\blee7196\Desktop\HW\04>pause
// Press any key to continue . . .
