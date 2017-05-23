class starter {
        public static void main(String args[])
        {
			System.out.print("Guess when the War of 1812 was fought: ");
			
			if(new EasyReader().readLine().equals("1812"))
			{
				System.out.println("You are correct!");
			}
			else
			{
				System.out.println("You are incorrect!");
			}
        }
        
}
