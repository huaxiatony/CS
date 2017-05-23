class temp {
        public static void main(String args[])
        {
		EasyReader console;
		console = new EasyReader();
		System.out.print("Please enter how many words you want to use: ");
		int x = console.readInt();
		String[] words = new String[x];
		int a = 0;
		
		for(int i = 0; i < x; i++)
		{
			a = a + 1;
			System.out.print("Word " + a + ": ");
			words[i] = console.readLine();
		}
		
		System.out.print("Your sentence is: ");
		for(int i = 0; i < words.length; i++)
		{
			System.out.print(words[i] + " ");
		}
		int wordlength = 0;
		String number = "hi";
		for(int i = 0; i < words.length; i++)
		{
			if(wordlength < words[i].length())
			{
				number = words[i];
			}
		}
		System.out.println(" ");
		System.out.println("The longest length is: " + number);
		
	
		
		
        }
}


// C:\Users\blee7196\Desktop\HW\07>java -cp ; temp
// Please enter how many words you want to use: 5
// Word 1: Hi
// Word 2: my
// Word 3: name
// Word 4: is
// Word 5: Benjamin
// Your sentence is: Hi my name is Benjamin
// The longest length is: Benjamin

// C:\Users\blee7196\Desktop\HW\07>pause
// Press any key to continue . . .
