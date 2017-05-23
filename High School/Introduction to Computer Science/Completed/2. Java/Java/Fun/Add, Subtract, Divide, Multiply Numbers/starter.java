class starter {
		static EasyReader ER = new EasyReader();
        public static void main(String args[])
        {	
			System.out.println("Enter \"1\" to add numbers");
			System.out.println("Enter \"2\" to subtract numbers");
			System.out.println("Enter \"3\" to multiply numbers");
			System.out.println("Enter \"4\" to divide numbers");
			System.out.println("");
			System.out.print("What would you like to do? "); int options = ER.readInt();
			System.out.println(""); System.out.println(""); System.out.println("");
			
			if(options == 1)
			{
				AddNumbers();
			}
			else if(options == 2)
			{
				SubtractNumbers();
			}
			else if(options == 3)
			{
				MultiplyNumbers();
			}
			else if(options == 4)
			{
				DivideNumbers();
			}
		}
		
		static void AddNumbers()
		{
			System.out.print("What is the first number you would like to add? "); double A = ER.readDouble();
			System.out.println("");
			System.out.print("What is the second number you would like to add? "); double B = ER.readDouble();
			double C = A + B;
			System.out.println("");
			System.out.print("The added numbers equals to: " + C);
		}
		
		static void SubtractNumbers()
		{
			System.out.print("What is the first number you would like to subtract? "); double A = ER.readDouble();
			System.out.println("");
			System.out.print("What is the second number you would like to subtract? "); double B = ER.readDouble();
			double C = A - B;
			System.out.println("");
			System.out.print("The subtracted numbers equals to: " + C);
		}
		
		static void MultiplyNumbers()
		{
			System.out.print("What is the first number you would like multiply? "); double A = ER.readDouble();
			System.out.println("");
			System.out.print("What is the second number you would like to multiply? "); double B = ER.readDouble();
			double C = A * B;
			System.out.println("");
			System.out.print("The multiplied numbers equals to: " + C);
		}
		
		static void DivideNumbers()
		{
			System.out.print("What is the first number you would like to divide? "); double A = ER.readDouble();
			System.out.println("");
			System.out.print("What is the second number you would like to divide? "); double B = ER.readDouble();
			double C = A / B;
			System.out.println("");
			System.out.print("The divided numbers equals to: " + C);
		}
}