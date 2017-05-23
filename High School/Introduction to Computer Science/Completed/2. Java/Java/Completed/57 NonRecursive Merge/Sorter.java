public class Sorter
{
	public int[] bubbleSort(int[] list)
	{
		for (int outer = 0; outer < list.length - 1; outer++)
		{
			for (int inner = 0; inner < list.length-outer-1; inner++)
			{
				if (list[inner] > list[inner + 1])
				{
					int temp = list[inner];
					list[inner] = list[inner + 1];
					list[inner + 1] = temp;
				}
			}
		}

		return list;
	}

	public int[] selectionSort(int[] list)
	{
		int min, temp;

		for (int outer = 0; outer < list.length - 1; outer++)
		{
			min = outer;
			for (int inner = outer + 1; inner < list.length; inner++)
			{
				if (list[inner] < list[min])
				{
					min = inner;
				}
			}
			temp = list[outer];
			list[outer] = list[min];
			list[min] = temp;
		}

		return list;
	}

	public int[] insertionSort(int[] list)
	{
		for (int outer = 1; outer < list.length; outer++)
		{
			int position = outer;
			int key = list[position];

			while (position > 0 && list[position - 1] > key)
			{
				list[position] = list[position - 1];
				position--;
			}
			list[position] = key;
		}

		return list;
	}
	
	public int[] merge(int[] a, int[] b)
	{
		int[] c = new int[a.length + b.length];
		
		int x = 0; int y = 0;
		
		for(int i = 0; i < c.length; i++)
		{
			if(x == a.length)
			{
				c[i] = b[y];
				y++;
			}
			else if(y == b.length)
			{
				c[i] = a[x];
				x++;
			}
			else if(a[x] < b[y])
			{
				c[i] = a[x];
				x++;
			}
			else
			{
				c[i] = b[y];
				y++;
			}
		}
		
		return c;
	}
	
	public void mergeSort(int A[], int first, int last)
	{
		int middleInt = (last - first) / 2;
		
		int position = first;
		int[] A1 = new int[middleInt];
		int[] A2 = new int[(last-first) - middleInt];
		
		for(int i = 0; i < A1.length; i++)
		{
			A1[i] = A[position];
			position ++;
		}
		
		for(int i = 0; i < A2.length; i++)
		{
			A2[i] = A[position];
			position ++;
		}
		
		int[] mergedA = merge(insertionSort(A1), insertionSort(A2));
		
		for(Integer x : mergedA) { System.out.print(x + " "); }
	}
}