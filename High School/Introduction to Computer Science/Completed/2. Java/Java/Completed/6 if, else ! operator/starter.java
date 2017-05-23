class starter {
        public static void main(String args[])
        {
			System.out.print("Guess when the War of 1812 was fought: "); int Year = new EasyReader().readInt();
			
			if(Year == 1812)
			{
				System.out.println("You are correct!");
			}
			else if(Year == 1813 || Year == 1811)
			{
				System.out.println("You are off by one!");
			}
			else
			{
				System.out.println("You are incorrect!");
			}
        }
        
}
