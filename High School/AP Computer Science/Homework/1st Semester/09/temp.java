class temp {
        public static void main(String args[])
        {
		EasyReader console; console = new EasyReader();
		System.out.print("Please enter a sentence: "); 
		String sentence = console.readLine(); String reverse = "";
		// String tempSentence = sentence.split(" ");
		
		/* String[] originalSentence = sentence.split(" ");
		String reverse = "";
		for(int i = originalSentence.length - 1; i >= 0; i--)
		{
			reverse += originalSentence[i] + " ";
		}
		System.out.print(reverse);
		*/
		int len = sentence.length() - 1;
		int newLen = len;
		while(newLen>=0)
		{
			while(sentence.charAt(len)!=' ')
			{
			if(len==0)
				break;
				len--;
			}
			if(len==0)
			{
				System.out.print(sentence.substring(len,newLen+1));
				break;
			}
			else
			{
				System.out.print(sentence.substring(len+1,newLen+1));
				System.out.print(" ");
			}
			newLen = len--;
		}
		
		
		
		
	
		
		
		}
}
// E:\AP Comp Sci\HW\09>java -cp ; temp
// Please enter a sentence: I like to eat Krispy Kreme Donuts
// Donuts Kreme Krispy eat to like I
// E:\AP Comp Sci\HW\09>pause
// Press any key to continue . . .