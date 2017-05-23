class starter {
		
        public static void main(String args[])
        {
			EasyReader ER = new EasyReader();
			
			System.out.print("Please enter the 1st value: "); int A = ER.readInt();
			System.out.println("");
			System.out.print("Please enter the 2nd value: "); int B = ER.readInt();
			System.out.println("");
			System.out.print("Please enter the 3rd value: "); int C = ER.readInt();
			System.out.println("");
			
			if(B > A && B < C)
			{
				System.out.print("The middle value is: " + B);
			}
			else if(C > B && C < A)
			{
				System.out.print("The middle value is: " + C);
			}
			else if(B > C && B < A)
			{
				System.out.print("The middle value is: " + B );
			}
			else
			{
				System.out.print("The middle value is: " + A);
			}
		}
}