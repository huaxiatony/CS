class starter {

        public static void main(String args[])
        {
			CDCollection joe = new CDCollection("artists.txt", "albums.txt", "prices.txt");
			System.out.print("How much money do you have? : $");
			double amountOfMoney = new EasyReader().readDouble();
			
			System.out.println();
			System.out.print(joe.buyCD(amountOfMoney));
			System.out.println();
			System.out.print(joe.returnAmountOfSongsBought() + " songs bought");
			System.out.println();
			System.out.print("Amount of money left: $" + joe.returnAmountOfMoney());
			System.out.println();
			System.out.print("Total cost of songs: $" + (amountOfMoney - joe.returnAmountOfMoney()));
		}
}



// C:\Users\jcho5656\Desktop\Java\Completed\55 CDSRUS with ArrayList>java -cp ; sta
// rter
// How much money do you have? : $100

// Madonna  - Like a Prayer = $8.88
// Jazzy Jeff & Fresh Prince  - Code Red = $9.99
// Queen  - Greatest Hits = $10.65
// Rage Against The Machine  - Rage Against The Machine = $10.98
// Green Day  - Dookie = $10.99
// TLC  - Crazy, Sexy, Cool = $11.27
// Oingo Boingo  - Dead Man's Party = $11.39
// Blink 182  - Dude Ranch = $12.86

// 8 songs bought
// Amount of money left: $12.99
// Total cost of songs: $87.01
// C:\Users\jcho5656\Desktop\Java\Completed\55 CDSRUS with ArrayList>pause
// Press any key to continue . . .