class CVMath 
{
    public static int findMiddle(int num, int num2, int num3)
    {
		return (num + num2 + num3) - Math.max(Math.max(num,num2),Math.max(num2,num3)) - Math.min(Math.min(num,num2),Math.min(num2,num3)); 
    }
	
	public static double sqrt(double numA)
	{
		double squareroot Math.pow(numA,0.5); 
		int squareroot2 = (squareroot*1000000); 
		squareroot = (double)(squareroot2/1000000); 
		
		return squareroot; 
	}
		
}
