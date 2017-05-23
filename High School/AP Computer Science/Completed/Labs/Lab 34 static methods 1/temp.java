class temp {
        public static void main(String args[])
        {
		int firstNum, secondNum, thirdNum, median, total; 
		EasyReader console = new EasyReader(); 
		
		System.out.print("We are going to find the middle value of three numbers!");
		System.out.print("\nPlease enter the first value: "); 
		firstNum = console.readInt(); 
		System.out.print("Please enter the second value: "); 
		secondNum = console.readInt(); 
		System.out.print("Please enter the third value: "); 
		thirdNum = console.readInt(); 
		
		total = firstNum + secondNum + thirdNum; 
		median = total - Math.max(Math.max(firstNum,secondNum),Math.max(secondNum,thirdNum)) - Math.min(Math.min(firstNum,secondNum),Math.min(secondNum,thirdNum)); 
		
		System.out.print("\nThe middle value is : " + median);
        }
}


// E:\AP Comp Sci\Completed\Labs\Lab 34 Find Min>java -cp ; temp
// We are going to find the middle value of three numbers!
// Please enter the first value: 1
// Please enter the second value: 2
// Please enter the third value: 3

// The middle value is : 2
// E:\AP Comp Sci\Completed\Labs\Lab 34 Find Min>pause
// Press any key to continue . . .