class temp {
    public static void main(String args[])
    {
	EasyReader in=new EasyReader();
	int inner=1;
	
	System.out.print("Please enter how many rows: ");
	int depth=in.readInt();
	System.out.print("Please enter how many columns: ");
	int width=in.readInt(); 
	System.out.print("\n");
	int[][]matrix=new int[depth][width];

	for(int y=1;y<matrix.length-1;y++)
		for(int x=1;x<matrix[0].length-1;x++)
			matrix[y][x]=inner; 
	// for(int j = 0; j < matrix.length; j++){
		// for(int k = 0; k < matrix[0].length; k++){
        	// System.out.print(matrix[j][k] + " ");}
		// System.out.print("\n");}
	for(int[] i : matrix){
        for(int j : i){
            System.out.print(j + " ");}
        System.out.print("\n");}
	}
}

/*<terminated>temp(7)[Java Application]C:\Program Files\Java\jre1.8.0_73\bin\javaw.exe(Apr 1,2016,6:40:42 PM)
Please enter how many rows: 6
Please enter how many columns: 5

0 0 0 0 0 
0 1 1 1 0 
0 1 1 1 0 
0 1 1 1 0 
0 1 1 1 0 
0 0 0 0 0 
*/