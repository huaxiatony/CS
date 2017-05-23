import java.util.*;
public class main {

	public static void main(String[] args) {
	int[] count=new int[]{21,1,4,14,56,271,35,67};
	sort(count); 
	for(int i=0;i<count.length;i++)
		System.out.print(count[i]+" ");
	}
	
	public static void sort(int[] num)
	{
		for(int i=0;i<num.length-1;i++){
			for(int j=0;j<num.length-1;j++){
				if(num[j]>num[j+1]){
					int temp=num[j];
					num[j]=num[j+1];
					num[j+1]=temp;}}}
	}

}

//1 4 14 21 35 56 67 271