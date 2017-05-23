class temp {
        public static void main(String args[])
        {
		int num; 
		EasyReader console = new EasyReader(); 
		
		System.out.print("We are going to find the square root of a number!");
		System.out.print("\nPlease enter a value: "); 
		num = console.readInt(); 
		
		System.out.print("\nThe value is : " + CVMath.sqrt(num));
        }
}


// E:\AP Comp Sci\Completed\Labs\Lab 36 more math>java -cp ; temp
// We are going to find the square root of a number!
// Please enter a value: 2

// The value is : 1.414213562373095
// E:\AP Comp Sci\Completed\Labs\Lab 36 more math>pause
// Press any key to continue . . .