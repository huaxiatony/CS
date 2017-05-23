class starter {
		
        public static void main(String args[])
        {
			System.out.print("Please guess an integer between 1 - 1000: "); int A = new EasyReader().readInt();
			
			int B = 1 + (int)(Math.random() * 1000);
			
			if(A == B)
			{
				System.out.println("You guessed it right!");
			}
			else
			{
				System.out.println("You are wrong! The integer was: " + B);
			}
		}
}