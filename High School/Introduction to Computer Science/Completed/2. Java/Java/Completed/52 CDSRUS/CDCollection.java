import java.util.ArrayList;
public class CDCollection
{
	String artist; String album; String price;
	double amountOfMoney;
	
	public CDCollection(String x, String y, String z)
	{
		artist = x; album = y; price = z;
	}
	
	public double returnamountOfMoney()
	{
		return amountOfMoney;
	}
	
	public String buyCD(double money)
	{
		ArrayList<CD> joe = new ArrayList<CD>();
		String songs = "";
		amountOfMoney = money;
			
		EasyReader ER1 = new EasyReader(artist);
		EasyReader ER2 = new EasyReader(album);
		EasyReader ER3 = new EasyReader(price);
			
		while(ER1.eof() == false)
		{
			{
				joe.add(new CD(ER1.readLine(), ER2.readLine(), ER3.readLine()));
			}
		}
			
		while(true)
		{
			double lowestPrice = amountOfMoney; int indexOfLowestPrice = 0;
			if(joe.size() != 0)
			{
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
					songs += joe.get(indexOfLowestPrice).toString() + "\n";
					amountOfMoney = amountOfMoney - lowestPrice;
					joe.remove(indexOfLowestPrice);
				}
				else
				{
					joe.remove(indexOfLowestPrice);
				}
			}
			else
			{
				break;
			}
		}
		
		amountOfMoney = (double)Math.round(amountOfMoney * 100) / 100;
		return songs;
	}
}