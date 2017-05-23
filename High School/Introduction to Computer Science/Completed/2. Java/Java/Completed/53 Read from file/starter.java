class starter {

	public static void main(String args[])
	{	
		EasyReader ER = new EasyReader("moby.txt");
		int times = 0;

		while(true)
		{
			if(ER.eof())
			{
				break;
			}
			else if(ER.readWord().equals("whale"))
			{
				times++;
			}
		}

		System.out.print(times);
	}
}


// C:\Users\Blessing\Desktop\Java\Console Test Program>java -cp ; starter
// 352
// C:\Users\Blessing\Desktop\Java\Console Test Program>pause
// Press any key to continue . . .