class myLine {
	private double slope; 
	private double slope2; 
	private double slope3; 
	private double slope4; 
	private double intercept; 
	
	public myLine(double a, double b)
	{
		slope = a; slope2 = a; slope3 = a; slope4 = a; 
		intercept = b; 
	}
	public boolean isPerp(myLine a)
	{
		if(a.getPerpSlope() == this.getSlope())
		{
			return true; 
		}
		else 
		{
			return false; 
		}
	}
	public double getPerpSlope()
	{
		return (-1 * (1/slope)); 
	}
	public double getSlope()
	{
		return slope; 
	}
	public String toString()
	{
		return "The line: y = " + slope + "x + " + intercept; 
	}
	
}