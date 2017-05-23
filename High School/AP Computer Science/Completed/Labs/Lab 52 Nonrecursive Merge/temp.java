class temp {
    public static void main(String args[])
    {
	int[] c=new int[]{3,17,11,24,19,29,31,37,1,3,15,5,25,18,27,36};
	mergeSort(c);
	for(int i=0;i<c.length;i++)
	System.out.print(c[i]+" ");
    }
    public static void selectionSort(int[] c)
	{
		int min,temp;
		for(int x=0;x<c.length-1;x++)
		{
			min=x;
			for(int y=x+1;y<c.length;y++)
				if(c[y]<c[min])
					min=y;
			temp=c[x];
			c[x]=c[min];
			c[min]=temp;
		}
	}
	public static void bubbleSort(int[] nonSorted, int x, int y)
	{
		for(int j=x;j<y;j++)
			for(int k=0;k<nonSorted.length-1;k++)
				if(nonSorted[k]>nonSorted[k+1]){
					int temp=nonSorted[k];
					nonSorted[k]=nonSorted[k+1];
					nonSorted[k+1]=temp;}
	}
    public static void mergeSort(int[] c)
	{
		int mid=(c.length/2),base=0,first=0,last=c.length;
		int[] d=new int[mid];
		int[] e=new int[mid];
		for(int i=0;i<mid-1;i++)
			d[i] = c[i];
		for(int j=mid;j<c.length-1;j++)
			e[base]=c[mid];
			base++;
		bubbleSort(d,first,mid);
		bubbleSort(e,mid+1,last);
		merge(c,d,e);
	}
	public static void merge(int[] c, int[] a, int[] b)
	{
		int i=0;
		while(c[i]!=c[c.length])
		{
			if(a[i]<b[i]){
				c[i]=a[i];
				c[i+1]=b[i];
				i++;}
			else if(b[i]<=a[i]){
				c[i]=b[i];
				c[i+1]=a[i];
				i++;}
		}
	}
}

// <terminated> temp (4) [Java Application] C:\Program Files\Java\jre1.8.0_73\bin\javaw.exe (Mar 16,2016, 11:58:36 PM)
// 3 17 11 24 19 29 31 37 1 3 15 5 25 18 27 36