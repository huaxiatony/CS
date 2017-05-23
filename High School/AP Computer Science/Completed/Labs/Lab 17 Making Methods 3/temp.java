class temp {
        public static void main(String args[])
        {
		EasyReader menu;
		menu = new EasyReader();
		int num;
		int[] arr = new int[10];
		for(int i = 0; i < arr.length; i++)
		{
			arr[i] = (int)(Math.random()*9);
			System.out.print(arr[i] + " ");
		}
		System.out.println(' ');
		Math();
		
        }
		
		public static void Math()
		{
		int num2;
		int[] arr2 = new int[10];
		System.out.println(' ');
		for(int i = 0; i < arr2.length; i++)
		{
			arr2[i] = (int)(Math.random()*9);
		}
		int sum = 0;
		for(int x1 = 0; x1 < arr2.length; x1++)
		{
			sum = sum + arr2[x1];
		}
		System.out.println(sum);
		}
}
