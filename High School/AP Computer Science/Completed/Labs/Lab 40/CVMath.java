class CVMath 
{
    public static int findMiddle(int num, int num2, int num3)
    {
		return (num + num2 + num3) - Math.max(Math.max(num,num2),Math.max(num2,num3)) - Math.min(Math.min(num,num2),Math.min(num2,num3)); 
    }
	
	public static double sqrt2(double numA)
	{
		double squareroot = Math.pow(numA,0.5); 
		squareroot = (double)((int)(squareroot*1000000))/1000000; 
		return squareroot; 
	}
	
	public static double sqrt(double numB)
	{
		double guess = numB, temp = 0;
		while(true){
			guess = (guess + (numB/guess))/2; 
			if(   Math.abs(guess - temp) < 0.000001)
				break;
			temp = guess;
		}
		return guess; 
	}
	
	public static int fact(int n)
	{
		int num=n, base=1; 
		for(int i=1;i<=num;i++)
			base*=i;
		return base; 
		
		// if(n==1)
			// return 1; 
		// else 
			// return n*fact(n-1);
	}
	
	public static double recurPower(int base, int n)
	{
		if(n==1)
			return 1; 
		else
			return base*recurPower(base,n-1);
	}
}
