public class CD
{
	String artist; String album; double price;
	
	public CD(String x, String y, String z)
	{
		artist = x; album = y; price = Double.parseDouble(z);
	}
	
	public double returnPrice()
	{
		return price;
	}
	
	public String toString()
	{
		return artist + " - " + album + "= " + "$" + price;
	}
}