class starter {

        public static void main(String args[])
        {	
			int[] numArray = new int[10];
			
			for(int i = 0; i < numArray.length; i++)
			{
				numArray[i] = (int)(Math.random() * 100);
			}
			
			new Sorter().mergeSort(numArray, (int)(Math.random() * numArray.length), (int)(Math.random() * numArray.length));
		}
}