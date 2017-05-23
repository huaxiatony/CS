class temp {
	
		public static void printArray()
		{
		int[] arr = new int[50];
		for(int i = 0; i < 11; i++)
		{
			arr[i] = (int)(Math.random()*50);
			System.out.println(arr[i]);
		}
		
		}
	
        public static void main(String args[])
        {
	// Define a reference to a String object
		String attempt;
	// Define a reference to an EasyReader object
		EasyReader console;
	// Construct an EasyReader object
		console = new EasyReader();
		printArray();
        }
		
}
