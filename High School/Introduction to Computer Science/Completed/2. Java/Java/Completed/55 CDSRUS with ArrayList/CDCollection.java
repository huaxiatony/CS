import java.util.ArrayList;
public class CDCollection
{
	String artistFile; String albumFile; String priceFile; 
	int amountOfSongsBought = 0;
	double amountOfMoney;
	
	//Set text file location
	public CDCollection(String x, String y, String z)
	{
		artistFile = x; albumFile = y; priceFile = z;
	}
	
	public double returnAmountOfMoney()
	{
		return amountOfMoney;
	}
	
	public int returnAmountOfSongsBought()
	{
		return amountOfSongsBought;
	}

	public String buyCD(double money)
	{
		ArrayList<CD> joe = new ArrayList<CD>();
		
		String songs = ""; // String for list of songs bought
		amountOfMoney = money; // Current amount of money equals to 'money'
			
		EasyReader ER1 = new EasyReader(artistFile);
		EasyReader ER2 = new EasyReader(albumFile);
		EasyReader ER3 = new EasyReader(priceFile);
			
		// Import text files to ArrayList
		while(ER1.eof() == false) // Do until end of file is reached
		{
			{
				joe.add(new CD(ER1.readLine(), ER2.readLine(), ER3.readLine()));
			}
		}
			
		while(joe.size() != 0) // Do until 'joe' size == 0
		{
			double lowestPrice = amountOfMoney;
			int indexOfLowestPrice = 0;
			
			// Finds lowest album price of 'joe'
			for(int i = 0; i < joe.size(); i++)
			{	
				if(joe.get(i).returnPrice() < lowestPrice)
				{
					lowestPrice = joe.get(i).returnPrice();
					indexOfLowestPrice = i;
				}
			}
			
			if(amountOfMoney - lowestPrice > 0.00)
			{
				songs += joe.get(indexOfLowestPrice) + "\n"; // '\n' = new line
				amountOfSongsBought++;
				amountOfMoney = amountOfMoney - lowestPrice; // Update 'amountOfMoney'
				joe.remove(indexOfLowestPrice); // Removes lowest price album from 'joe'
			}
			else
			{
				joe.remove(indexOfLowestPrice); // // Removes lowest price album from 'joe'
			}
		}
		
		amountOfMoney = (double)Math.round(amountOfMoney * 100) / 100; //Round amountOfMoney up
		
		return songs;
	}
}