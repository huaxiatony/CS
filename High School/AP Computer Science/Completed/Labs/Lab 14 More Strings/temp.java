class temp {
        public static void main(String args[])
		
        {
	// Define a reference to a String object
		String attempt;
	// Define a reference to an EasyReader object
		EasyReader console;
		String n1;
		String n2;
	// Construct an EasyReader object
		console = new EasyReader();
		System.out.print("Please enter your full name: ");
		String n = console.readLine();
		int a = n.indexOf(' ');
		n1 = n.substring(0,a);
		n2 = n.substring(a+1);
		System.out.print(n2);
	
		//EasyReader console;
		//console = new EasyReader();
		//System.out.print("Please enter your first and last name");
		//String name = console.readLine();
		//int space = name.indexOf(' ');
		//String name1 = name.substring(0,space);
		//String name2 = name.substring(space+1);
		//System.out.print(name2);
		
        }
}
