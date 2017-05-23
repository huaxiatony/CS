class temp {
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
		int a;
		int b;
		int c;
		int d;
		int e;
		int f;
		int g;
		int h = 5;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		console = new EasyReader();
		System.out.print("Please enter the 1st score (It should be range from 1-10): ");
		a = console.readInt();
		System.out.print("Please enter the 2nd score: ");
		b = console.readInt();
		System.out.print("Please enter the 3rd score: ");
		c = console.readInt();
		System.out.print("Please enter the 4th score: ");
		d = console.readInt();
		System.out.print("Please enter the 5th score: ");
		e = console.readInt();
		System.out.print("Please enter the 6th score: ");
		f = console.readInt();
		System.out.print("Please enter the 7th score: ");
		g = console.readInt();
		
		if(a < b && a < c && a < d && a < e && a < f && a < g)
		{
			System.out.println("The lowest score is: " + a);
		}
		else if(b < a && b < c && b < d && b < e && b < f && b < g)
		{
			System.out.println("The lowest score is: " + b);
		}
		else if(c < a && c < b && c < d && c < e && c < f && c < g)
		{
			System.out.println("The lowest score is: " + c);
		}
		else if(d < a && d < b && d < c && d < e && d < f && d < g)
		{
			System.out.println("The lowest score is: " + d);
		}
		else if(e < a && e < b && e < c && e < d && e < f && e < g)
		{
			System.out.println("The lowest score is: " + e);
		}
		else if(f < a && f < b && f < c && f < d && f < e && f < g)
		{
			System.out.println("The lowest score is: " + f);
		}
		else if(g < a && g < b && g < c && g < d && g < e && g < f)
		{
			System.out.println("The lowest score is: " + g);
		}
		
		if(a > b && a > c && a > d && a > e && a > f && a > g)
		{
			System.out.println("The highest score is: " + a);
		}
		else if(b > a && b > c && b > d && b > e && b > f && b > g)
		{
			System.out.println("The highest score is: " + b);
		}
		else if(c > a && c > b && c > d && c > e && c > f && c > g)
		{
			System.out.println("The highest score is: " + c);
		}
		else if(d > a && d > b && d > c && d > e && d > f && d > g)
		{
			System.out.println("The highest score is: " + d);
		}
		else if(e > a && e > b && e > c && e > d && e > f && e > g)
		{
			System.out.println("The highest score is: " + e);
		}
		else if(f > a && f > b && f > c && f > d && f > e && f > g)
		{
			System.out.println("The highest score is: " + f);
		}
		else if(g > a && g > b && g > c && g > d && g > e && g > f)
		{
			System.out.println("The highest score is: " + g);
		}
		
		if(a < b && a < c && a < d && a < e && a < f && a < g)
		{
			if(b > a && b > c && b > d && b > e && b > f && b > g)
			{
				System.out.println("The average of the remaining score is: " + (c + d + e + f + g)/h);
			}
			else if(c > a && c > b && c > d && c > e && c > f && c > g)
			{
				System.out.println("The average of the remaining score is: " + (b + d + e + f + g)/h);
			}
			else if(d > a && d > b && d > c && d > e && d > f && d > g)
			{
				System.out.println("The average of the remaining score is: " + (b + c + e + f + g)/h);
			}
			else if(e > a && e > b && e > c && e > d && e > f && e > g)
			{
				System.out.println("The average of the remaining score is: " + (b + c + d + f + g)/h);
			}
			else if(f > a && f > b && f > c && f > d && f > e && f > g)
			{
				System.out.println("The average of the remaining score is: " + (b + c + d + e + g)/h);
			}
			else if(g > a && g > b && g > c && g > d && g > e && g > f)
			{
				System.out.println("The average of the reamining score is: " + (b + c + d + e + f)/h);
			}
		}
		
		if(b < a && b < c && b < d && b < e && b < f && b < g)
		{
			if(a > b && a > c && a > d && a > e && a > f && a > g)
			{
				System.out.println("The average of the remaining score is: " + (c + d + e + f + g)/h);
			}
			else if(c > a && c > b && c > d && c > e && c > f && c > g)
			{
				System.out.println("The average of the remaining score is: " + (a + d + e + f + g)/h);
			}
			else if(d > a && d > b && d > c && d > e && d > f && d > g)
			{
				System.out.println("The average of the remaining score is: " + (a + c + e + f + g)/h);
			}
			else if(e > a && e > b && e > c && e > d && e > f && e > g)
			{
				System.out.println("The average of the remaining score is: " + (a + c + d + f + g)/h);
			}
			else if(f > a && f > b && f > c && f > d && f > e && f > g)
			{
				System.out.println("The average of the remaining score is: " + (a + c + d + e + g)/h);
			}
			else if(g > a && g > b && g > c && g > d && g > e && g > f)
			{
				System.out.println("The average of the reamining score is: " + (a + c + d + e + f)/h);
			}
		}
		if(c < a && c < d && c < e && c < f && c < g)
		{
			if(b > a && b > c && b > d && b > e && b > f && b > g)
			{
				System.out.println("The average of the remaining score is: " + (a + d + e + f + g)/h);
			}
			else if(d > a && d > b && d > c && d > e && d > f && d > g)
			{
				System.out.println("The average of the remaining score is: " + (b + a + e + f + g)/h);
			}
			else if(e > a && e > b && e > c && e > d && e > f && e > g)
			{
				System.out.println("The average of the remaining score is: " + (b + a + d + f + g)/h);
			}
			else if(f > a && f > b && f > c && f > d && f > e && f > g)
			{
				System.out.println("The average of the remaining score is: " + (b + a + d + e + g)/h);
			}
			else if(g > a && g > b && g > c && g > d && g > e && g > f)
			{
				System.out.println("The average of the reamining score is: " + (b + a + d + e + f)/h);
			}
			else if(a > b && a > c && a > d && a > e && a > f && a > g)
			{
				System.out.println("The average of the remaining score is: " + (b + d + e + f + g)/h);
			}
		}
		if(d < a && d < b && d < c && d < e && d < f && d < g);
		{
			if(b > a && b > c && b > d && b > e && b > f && b > g)
			{
				System.out.println("The average of the remaining score is: " + (c + a + e + f + g)/h);
			}
			else if(c > a && c > b && c > d && c > e && c > f && c > g)
			{
				System.out.println("The average of the remaining score is: " + (b + a + e + f + g)/h);
			}
			else if(a > b && a > c && a > e && a > d && a > f && a > g)
			{
				System.out.println("The average of the remaining score is: " + (b + c + e + f + g)/h);
			}
			else if(e > a && e > b && e > c && e > d && e > f && e > g)
			{
				System.out.println("The average of the remaining score is: " + (b + c + a + f + g)/h);
			}
			else if(f > a && f > b && f > c && f > d && f > e && f > g)
			{
				System.out.println("The average of the remaining score is: " + (b + c + a + e + g)/h);
			}
			else if(g > a && g > b && g > c && g > d && g > e && g > f)
			{
				System.out.println("The average of the reamining score is: " + (b + c + a + e + f)/h);
			}
		}
		if(e < a && e < b && e < c && e < d && e < f && e < g)
		{
			if(b > a && b > c && b > d && b > e && b > f && b > g)
			{
				System.out.println("The average of the remaining score is: " + (c + d + a + f + g)/h);
			}
			else if(c > a && c > b && c > d && c > e && c > f && c > g)
			{
				System.out.println("The average of the remaining score is: " + (b + d + a + f + g)/h);
			}
			else if(d > a && d > b && d > c && d > e && d > f && d > g)
			{
				System.out.println("The average of the remaining score is: " + (b + c + a + f + g)/h);
			}
			else if(a > b && a > c && a > c && a > d && a > f && a > g)
			{
				System.out.println("The average of the remaining score is: " + (b + c + d + f + g)/h);
			}
			else if(f > a && f > b && f > c && f > d && f > e && f > g)
			{
				System.out.println("The average of the remaining score is: " + (b + c + d + a + g)/h);
			}
			else if(g > a && g > b && g > c && g > d && g > e && g > f)
			{
				System.out.println("The average of the reamining score is: " + (b + c + d + a + f)/h);
			}
		}
		
        }
}
