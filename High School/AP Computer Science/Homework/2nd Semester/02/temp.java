class temp {
    public static void main(String args[])
    {
	int[] ladyGaga = new int[] {50,50,20,80,53};
	int[] theDonald = new int[] {20,50,50,53,80};
	int[] Kobe = new int[] {20,50,50,80}; 
	
	CVRecord gaga = new CVRecord(ladyGaga,"Lady Gaga"); 
	CVRecord donald = new CVRecord(theDonald,"The Donald"); 
	CVRecord kobe = new CVRecord(Kobe,"Kobe"); 
	
	System.out.println(gaga + " average is: " + gaga.finalAverage());
	System.out.println(donald + " average is: " + donald.finalAverage()); 
	System.out.println(kobe + " average is: " + kobe.finalAverage()); 
    }
}


// E:\AP Comp Sci\HW\2nd Semester\02>java -cp ; temp
// Lady Gaga's scores are: 50 50 20 80 53 average is: 50.6
// The Donald's scores are: 20 50 50 53 80 average is: 61.0
// Kobe's scores are: 20 50 50 80 average is: 65.0

// E:\AP Comp Sci\HW\2nd Semester\02>pause
// Press any key to continue . . .