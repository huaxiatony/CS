class starter {
		
		static int Answer;
        public static void main(String args[])
        {
			boolean ABC = false;
			
			while(true)
			{
				int A = 1 + (int)(Math.random() * 1000);
				
				if(ABC == false)
				{
					System.out.print("Please guess an integer: "); Answer = new EasyReader().readInt();
					ABC = true;
				}
				
				if(A == Answer)
				{
					System.out.println("You got it correct!");
				}
				else
				{
					System.out.println("");
					System.out.print("Wrong! Please make another guess: "); Answer = new EasyReader().readInt();
				}
			}
		}
}