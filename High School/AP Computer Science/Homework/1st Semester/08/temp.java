class temp {
        public static void main(String args[])
        {
			int[] arr = new int[7];
			int[] occur = new int[10];
			System.out.print("The data array is: ");
			for(int i = 0; i < arr.length; i++) {
			arr[i] = (int)(Math.random()*10);
			System.out.print(arr[i] + " ");
			occur[arr[i]]++;
			}
			System.out.print("\nTally array: ");
			printTally(occur);
        }
		public static void printTally(int[] occur) {
			
			for(int x = 0; x < 10; x++) {
			System.out.print(occur[x] + " ");
			}
			
		}
}


// C:\Users\blee7196\Desktop\HW\08>java -cp ; temp
// The data array is: 0 6 8 7 1 0 9
// Tally array: 2 1 0 0 0 0 1 1 1 1
// C:\Users\blee7196\Desktop\HW\08>pause
// Press any key to continue . . .