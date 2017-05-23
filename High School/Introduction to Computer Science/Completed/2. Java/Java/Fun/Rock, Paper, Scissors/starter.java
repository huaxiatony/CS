class starter {

	public static void main(String args[])
	{
		PlayRPS();
	}

	static void PlayRPS()
	{
		int num = 1 + (int)(Math.random() * 4);
		// 1 = rock, 2 = paper, 3 = scissor

		System.out.print("Please choose \"rock\" \"paper\" or \"scissor\": "); String input = new EasyReader().readLine();


		if(num == 1 && input.equalsIgnoreCase("rock"))
		{ 
			System.out.println("");
			System.out.println("It's a tie!"); 
		}
		else if(num == 2 && input.equalsIgnoreCase("paper"))
		{
			System.out.println("");
			System.out.println("It's a tie!"); 
		}
		else if(num == 3 && input.equalsIgnoreCase("scissor"))
		{
			System.out.println("");
			System.out.println("It's a tie!"); 
		}
		else if(num == 2 && input.equalsIgnoreCase("rock"))
		{
			System.out.println("");
			System.out.println("You lose! The computer had paper");
		}
		else if(num == 3 && input.equalsIgnoreCase("rock"))
		{
			System.out.println("");
			System.out.println("You win! The computer had scissor");
		}
		else if(num == 1 && input.equalsIgnoreCase("paper"))
		{
			System.out.println("");
			System.out.println("You win! The computer had rock");
		}
		else if(num == 3 && input.equalsIgnoreCase("paper"))
		{
			System.out.println("");
			System.out.println("You lose! The computer had scissor");
		}
		else if(num == 1 && input.equalsIgnoreCase("scissor"))
		{
			System.out.println("");
			System.out.println("You lose! The computer had rock");
		}
		else if(num == 2 && input.equalsIgnoreCase("scissor"))
		{
			System.out.println("");
			System.out.println("You win! The computer had paper");
		}

		System.out.println("");
		System.out.print("Would you like to play again? (y/n): ");

		if (new EasyReader().readLine().equalsIgnoreCase("y")) { System.out.println(""); PlayRPS(); }
	}
}