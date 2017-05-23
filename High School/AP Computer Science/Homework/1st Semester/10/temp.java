class temp {
        public static void main(String args[])
        {
		EasyReader console; console = new EasyReader();
		
		String originalWord; String reverseWord = "";
		
		System.out.print("\nPlease enter a word to check if it is a palindrome: ");
		originalWord = console.readWord();
		
		int wordLength = originalWord.length();
		
		for(int i = wordLength - 1; i >= 0; i--) {
			reverseWord += originalWord.charAt(i);
		}
		
		if(reverseWord.equals(originalWord)) {
			System.out.print("\nCongratulations! " + originalWord + " is actually a palindrome!");
		}
		else {
			System.out.print("\nSory.. " + originalWord + " is not a palindrome.");
		}
        }
}


// E:\AP Comp Sci\HW\10>java -cp ; temp

// Please enter a word to check if it is a palindrome: level

// Congratulations! level is actually a palindrome!
// E:\AP Comp Sci\HW\10>pause
// Press any key to continue . . .