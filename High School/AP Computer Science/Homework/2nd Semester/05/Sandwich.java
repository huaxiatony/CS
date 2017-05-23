public class Sandwich implements MenuItem
{
	private String name; 
	private double cost; 
	public Sandwich(String objectName, double price)
	{
		name = objectName; cost = price; 
	}
	public String getName()
	{
		return name; 
	}
	public double getPrice()
	{
		return cost; 
	}
	public String toString()
	{
		return "The sandwich is " + name + " and the price is $" + cost; 
	}
}
