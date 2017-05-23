class temp {
        public static void main(String args[])
        {
		int num;  
		EasyReader console = new EasyReader(); 
		
		System.out.print("We are going to find the square root of a number");
		System.out.print("\nPlease enter a value: "); 
		num = console.readInt(); 
		
		System.out.print("\nThe middle value is : " + CVMath.sqrt(num));
        }
}

