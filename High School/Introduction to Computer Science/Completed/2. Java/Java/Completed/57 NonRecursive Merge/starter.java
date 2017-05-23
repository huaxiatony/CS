class starter {

        public static void main(String args[])
        {	
			int[] numArray = new int[1000000];
			
			for(int i = 0; i < numArray.length; i++)
			{
				numArray[i] = (int)(Math.random() * 10000);
			}
			
			new Sorter().mergeSort(numArray, (int)(Math.random() * numArray.length), (int)(Math.random() * numArray.length));
		}
}