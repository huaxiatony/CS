class temp {
        public static void main(String args[])
        {
		EasyReader console; console = new EasyReader();
		System.out.print("Please enter a phrase to split: ");
		String phrase = console.readLine();
		System.out.print("Please enter where you want to split the phrase: ");
		String marker = console.readLine();
		
		if(phrase.indexOf(marker) > -1 && !marker.equals("")) 
		{
			String[] newArray = split(phrase,marker);
			for(int i = 0; i < newArray.length; i++)
			{
				System.out.println(newArray[i]);
			}
		}
		else
		{
			String[] newArr = split(phrase,marker);
			for(int x = 0; x < newArr.length; x++)
			{
				System.out.println(phrase.charAt(x));
			}
		}
		
        }
		public static String[] split(String phrase, String marker)
		{
			int counter = 0; int numWords = phrase.indexOf(marker);
			String temp = phrase;
			while(numWords != -1)
			{
				phrase = phrase.substring(numWords+1);
				counter++;
				numWords = phrase.indexOf(marker);
			}
			String[] arr = new String[counter + 1];
			numWords = temp.indexOf(marker);
			int count = 0; 
			while(numWords != -1)
			{
				arr[count] = temp.substring(0,numWords);
				temp = temp.substring(numWords+1);
				count++;
				numWords = temp.indexOf(marker);
			}
			arr[counter] = temp;
			return arr; 
		}
		
		}


// E:\AP Comp Sci\HW\12>java -cp ; temp
// Please enter a phrase to split: Happy Halloween
// Please enter where you want to split the phrase:
// Happy
// Halloween

// E:\AP Comp Sci\HW\12>pause
// Press any key to continue . . .


// E:\AP Comp Sci\HW\12>java -cp ; temp
// Please enter a phrase to split: Happy
// Please enter where you want to split the phrase:
// There was nothing to split.
// E:\AP Comp Sci\HW\12>pause
// Press any key to continue . . .


// E:\AP Comp Sci\HW\12>java -cp ; temp
// Please enter a phrase to split: happy
// Please enter where you want to split the phrase: p
// ha

// y

// E:\AP Comp Sci\HW\12>pause
// Press any key to continue . . .
