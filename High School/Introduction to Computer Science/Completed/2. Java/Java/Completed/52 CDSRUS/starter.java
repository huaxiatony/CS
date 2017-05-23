class starter {

        public static void main(String args[])
        {
			CDCollection joe = new CDCollection("artists.txt", "albums.txt", "prices.txt");
			
			System.out.print(joe.buyCD(100.00));
			System.out.println();
			System.out.print("Amount of money left: " + joe.returnamountOfMoney());
		}
}


// C:\Users\jcho5656\Desktop\Java\Completed\54 Making a CD Class>java -cp ; starter

// Madonna  - Like a Prayer = $8.88
// Jazzy Jeff & Fresh Prince  - Code Red = $9.99
// Queen  - Greatest Hits = $10.65
// Rage Against The Machine  - Rage Against The Machine = $10.98
// Green Day  - Dookie = $10.99
// TLC  - Crazy, Sexy, Cool = $11.27
// Oingo Boingo  - Dead Man's Party = $11.39
// Blink 182  - Dude Ranch = $12.86

// Amount of money left: 12.99
// C:\Users\jcho5656\Desktop\Java\Completed\54 Making a CD Class>pause
// Press any key to continue . . .