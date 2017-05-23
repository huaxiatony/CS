class starter {

    public static void main(String args[])
    {
		CVMath math = new CVMath();
		
		System.out.print("Enter \"1\" to ADD numbers.");
		System.out.println();
		System.out.print("Enter \"2\" to SUBTRACT numbers.");
		System.out.println();
		System.out.print("Enter \"3\" to MULTIPLY numbers.");
		System.out.println();
		System.out.print("Enter \"4\" to DIVIDE numbers.");
		System.out.println();
		System.out.print("Enter \"5\" to SQUARE ROOT a number.");
		System.out.println();
		System.out.print("Enter \"6\" to POWER a number.");
		System.out.println();
		System.out.print("Enter \"7\" to find the HYPOTENUSE.");
		System.out.println();
		System.out.print("Enter \"8\" to find the MIDDLE NUMBER of three integers.");
		System.out.println();
		System.out.print("Enter any other key to EXIT.");
		System.out.println();
		System.out.println();
		
		System.out.print("What would you like to do?: "); int input = new EasyReader().readInt();
		
		System.out.println();
		System.out.println();
		
		if(input == 1)
		{
			System.out.print("Please enter an addition problem (ex: 5+6+8): "); String equation = new EasyReader().readLine();
			System.out.println();
			System.out.print("The answer is: " + math.add(equation.replace("+", "&").split("&")));
		}
		else if(input == 2)
		{
			System.out.print("Please enter a subtraction problem (ex: 5-8-4): "); String equation = new EasyReader().readLine();
			System.out.println();
			System.out.print("The answer is: " + math.subtract(equation.replace("-", "&").split("&")));
		}
		else if(input == 3)
		{
			System.out.print("Please enter a multiplication problem (ex: 5*8*4): "); String equation = new EasyReader().readLine();
			System.out.println();
			System.out.print("The answer is: " + math.multiply(equation.replace("*", "&").split("&")));
		}
		else if(input == 4)
		{
			System.out.print("Please enter a division problem (ex: 5/4/4): "); String equation = new EasyReader().readLine();
			System.out.println();
			System.out.print("The answer is: " + math.divide(equation.replace("/", "&").split("&")));
		}
		else if(input == 5)
		{
			System.out.print("Please enter a number to square root: "); double num = new EasyReader().readDouble();
			System.out.println();
			System.out.print("The answer is: " + math.squareRoot(num));
		}
		else if(input == 6)
		{
			System.out.print("Please enter the base: "); double num = new EasyReader().readDouble();
			System.out.println();
			System.out.print("Please enter the power: "); int pwr = new EasyReader().readInt();
			System.out.println();
			System.out.print("The answer is: " + math.power(num, pwr));
		}
		else if(input == 7)
		{
			System.out.print("Please enter a value of a leg: "); double x = new EasyReader().readDouble();
			System.out.println();
			System.out.print("Please enter a value of the other leg: "); double y = new EasyReader().readDouble();
			System.out.println();
			System.out.print("The answer is: " + math.pythag(x, y));
		}
		else if(input == 8)
		{
			System.out.print("Please enter the first integer: "); int x = new EasyReader().readInt();
			System.out.println();
			System.out.print("Please enter the second integer: "); int y = new EasyReader().readInt();
			System.out.println();
			System.out.print("Please enter the third integer: "); int z = new EasyReader().readInt();
			System.out.println();
			
			System.out.print("The middle value is: " + math.findMid(x, y, z));
		}
	}
}