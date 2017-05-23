class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
		int a1;
		int b1;
		int c1;
	// Define a reference to an EasyReader object
		EasyReader console = new EasyReader();
	// Construct an EasyReader object
		System.out.print("What is your first number?: ");
		a1 = console.readInt();
		System.out.print("What is your second number?: ");
		b1 = console.readInt();
		System.out.print("What is your third number?: ");
		c1 = console.readInt();
		if(a1 > b1)
		{
			if(a1 > c1)
			{
				System.out.print(a1);
			}
		}
		else if(b1 > a1)
		{
			if(b1 > c1)
			{
				System.out.print(b1);
			}
		}
		else if(c1 > a1)
		{
			if(c1 > b1)
			{
				System.out.print(c1);
			}
		}
		
        }
}
