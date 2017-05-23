class temp {
        public static void main(String args[])
        {
		int[] arr = new int[20];
		System.out.println("The numbers in order are: ");
		for(int i = 0; i < 20; i++)
		{
			arr[i] = (int)(Math.random()*50);
			System.out.print(" " + arr[i]);
		}
		System.out.println(" ");
		System.out.println("Here are the numbers in reverse: ");
		for(int i = 0; i < arr.length; i++)
		{
			System.out.print(arr[arr.length-1-i]+" ");
			// int temp = arr[i];
			// arr[i] = arr[arr.length - i - 1];
			// arr[arr.length - i - 1] = temp;
			// System.out.print(" " + temp);
		}
		
		}
}


// C:\Users\blee7196\Desktop\HW\05>java -cp ; temp
// The numbers in order are:
 // 30 34 36 14 39 32 21 6 31 29 43 5 30 22 47 30 1 38 20 29
// Here are the numbers in reverse:
// 29 20 38 1 30 47 22 30 5 43 29 31 6 21 32 39 14 36 34 30
// C:\Users\blee7196\Desktop\HW\05>pause
// Press any key to continue . . .