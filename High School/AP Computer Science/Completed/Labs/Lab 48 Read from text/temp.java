class temp {
    public static void main(String args[])
    {
		EasyReader in = new EasyReader("moby.txt");
		int count = 0;
		while(true) {
		String bob = in.readWord().toLowerCase().trim(); 
		if(bob.contains("whal"))
			count++;
			if(in.eof())
				break;
		}
		System.out.print(count);
    }
}

//<terminated> temp [Java Application] C:\Program Files\Java\jre1.8.0_73\bin\javaw.exe (Feb 22, 2016, 5:14:10 PM)
//1712