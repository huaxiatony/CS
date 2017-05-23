import java.util.Arrays;
import java.awt.*;

public class CVMath
{
	public double squareRoot(double number)
	{
		return Math.sqrt(number);
	}
	
	public int fact(int n)
	{
		int abc = 1;
		
		for(int i = n; i > 0; i--)
		{
			abc = abc * i;
		}
		
		return abc;
	}
	
	public double power(double number, int pw)
	{
		double abc = number; 
		
		for(int i = 0; i < pw - 1; i++)
		{
			abc = abc * number;
		}
		
		return abc;
	}
	
	public double add(String[] equation)
	{
		double answer = 0;
		
		for(int i = 0; i < equation.length; i++)
		{
			answer = answer + Double.parseDouble(equation[i]);
		}
		
		return answer;
	}
	
	public double subtract(String[] equation)
	{
		double answer = Double.parseDouble(equation[0]);
		
		for(int i = 1; i < equation.length; i++)
		{
			answer = answer - Double.parseDouble(equation[i]);
		}
		
		return answer;
	}
	
	public double divide(String[] equation)
	{
		double answer = Double.parseDouble(equation[0]);
		
		for(int i = 1; i < equation.length; i++)
		{
			answer = answer / Double.parseDouble(equation[i]);
		}
		
		return answer;
	}
	
	public double multiply(String[] equation)
	{
		double answer = Double.parseDouble(equation[0]);
		
		for(int i = 1; i < equation.length; i++)
		{
			answer = answer * Double.parseDouble(equation[i]);
		}
		
		return answer;
	}
	
	public double pythag(double y, double z)
	{
		return (squareRoot(power(y, 2) + power(z, 2)));
	}
	
	public int findMid(int one, int two, int three)
	{
		int[] numbers = new int[3];
		numbers[0] = one; numbers[1] = two; numbers[2] = three;
			
		Arrays.sort(numbers);
		return numbers[1];
	}
	
	public int logb2(int X)
	{	
		if(X != 1)
		{
			return 1 + logb2(X / 2);
		}
		else
		{
			return 0;
		}
	}

	public double colorDist(Color one, Color two)
	{
		return squareRoot( power(one.getRed() - two.getRed(), 2) + power(one.getGreen() - two.getGreen(), 2) + power(one.getBlue() - two.getBlue(), 2) );
	}
	
}