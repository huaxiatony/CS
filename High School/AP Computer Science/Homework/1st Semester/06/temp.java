class temp {
        public static void main(String args[])
        {
		double[] arr = new double[10];
		System.out.println("The original data: ");
		for(int i = 0; i < 10; i++)
		{
			arr[i] = Math.random()*99;
			arr[i] = Math.round(arr[i]*10)/10;
			System.out.print(arr[i] + " ");
		}
		double avg = 0;
		for(int a = 0; a < 10; a++)
		{
			avg = (avg + arr[a]);
		}
		avg = avg/10;
		avg = Math.random()*99;
		avg = Math.round(avg*10)/10;
		System.out.println(" ");
		System.out.print("The average is: " + avg);
		for(int x = 0; x < arr.length; x++)
		{
			if(arr[x] > avg)
			{
				arr[x] = avg;
			}
		}
		System.out.print(" ");
		System.out.println("The edited data: ");
		for(int xx = 0; xx < arr.length; xx++)
		{
			System.out.print(arr[xx] + " ");
		}
		
        }
}


// C:\Users\blee7196\Desktop\HW\06>java -cp ; temp
// The original data:
// 87.0 11.0 80.0 57.0 94.0 82.0 75.0 19.0 14.0 80.0
// The average is: 55.0 The edited data:
// 55.0 11.0 55.0 55.0 55.0 55.0 55.0 19.0 14.0 55.0
// C:\Users\blee7196\Desktop\HW\06>pause
// Press any key to continue . . .