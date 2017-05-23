class starter {
		static EasyReader ER = new EasyReader();
        public static void main(String args[])
        {
			EasyReader ER = new EasyReader();
			System.out.print("Please enter a phrase: "); String phrase = ER.readLine();
			System.out.println("");
			System.out.print("Would you like to also count the spaces? (yes/no): "); String answer = ER.readLine();
			
			if(answer.equalsIgnoreCase("yes"))
			{
				int characters = phrase.length();
				System.out.println("");
				System.out.print("The phrase has " + characters + " characters.");
			}
			else if(answer.equalsIgnoreCase("no"))
			{
				int characters = phrase.replace(" ", "").length();
				System.out.println("");
				System.out.print("The phrase has " + characters + " characters without spaces.");
			}
		}
}