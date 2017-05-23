class starter {

	public static void main(String args[])
	{
		System.out.print("How many elements do you want in your data set? ");

		double[] dataSet = new double[new EasyReader().readInt()]; 
		double sumOfAll = 0; double average = 0;

		for(int i = 0; i < dataSet.length; i++)
		{ 
			double ran = (double)((int)(Math.random() * 10));
			dataSet[i] = ran;
			sumOfAll += ran;
		}

        average = sumOfAll / dataSet.length;
		
        System.out.println();
        System.out.print("The data set is: "); for(int i = 0; i < dataSet.length; i++) { System.out.print(dataSet[i] + " "); } 
        System.out.println();
        System.out.print("The variance is: " + findDifferenceSquared(dataSet, average));

    }

    static double findDifferenceSquared(double[] dataSet, double average)
    {
    	double total = 0;

    	for(int i = 0; i < dataSet.length; i++) { total += (dataSet[i] - average) * (dataSet[i] - average); }

    	return total / dataSet.length;
    }

}