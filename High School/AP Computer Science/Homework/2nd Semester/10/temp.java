class temp {
    public static void main(String args[])
    {
		EasyReader in=new EasyReader();
		System.out.print("Please enter an integer: ");
		int num=in.readInt();
		System.out.print(reverse(num));
    }
	public static int reverse(int num)
	{
		int answer=0,rem=0;
		while(num!=0)
		{
			rem=num%10;
			answer=answer*10+rem;
			num/=10;
		}
		return answer;
	}
}


// E:\AP Comp Sci\Homework\2nd Semester\10>java -cp ; temp
// Please enter an integer: 54321
// 12345
// E:\AP Comp Sci\Homework\2nd Semester\10>pause
// Press any key to continue . . .


// E:\AP Comp Sci\Homework\2nd Semester\10>java -cp ; temp
// Please enter an integer: 12345
// 54321
// E:\AP Comp Sci\Homework\2nd Semester\10>pause
// Press any key to continue . . .

