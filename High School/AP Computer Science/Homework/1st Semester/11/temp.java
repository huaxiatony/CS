class temp {
        public static void main(String args[])
        {
			EasyReader console; console = new EasyReader(); String input; int number;
			System.out.print("What word do you want to display?: "); 
			input = console.readWord();
			System.out.print("How long do you want it?: ");
			number = console.readInt();
			String[] arr = input.split(""); 
			
			for(int a = 0; a < input.length(); a++) 
			{
				for(int i = 0; i < number; i++) 
				{
					System.out.print(arr[a] + " ");
				}
				System.out.println();
				System.out.println();
			}
			
			
			
        }
}


// E:\AP Comp Sci\HW\11>java -cp ; temp
// What word do you want to display?: banana
// How long do you want it?: 5
// b b b b b

// a a a a a

// n n n n n

// a a a a a

// n n n n n

// a a a a a


// E:\AP Comp Sci\HW\11>pause
// Press any key to continue . . .