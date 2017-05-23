public class Trio implements MenuItem
{
	private String name; 
	private double cost;
	public Trio(Sandwich a,Salad b,Drink c)
	{
		
	}
	public String getName()
	{
		return "The trio are: " + a + " " + b + " " + c; 
	}
	public double getPrice()
	{
		double high = Math.max(Math.max(a,b),Math.max(b,c));
	}
}