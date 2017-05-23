public class CVRecord
{
	private int[] scores; 
	private String name; 
	public CVRecord(int[] sc, String es)
	{
		scores = sc;
		name = es;
	}

	private double average(int first, int last)
	{
		double avg = 0; double n = 0;
		for(int i = first; i <= last; i++)
		{
			n++; avg += scores[i];
		}
		avg = avg/n; 
		return avg; 
	}
	private boolean hasImproved()
	{
		for(int i = 0; i < scores.length-1; i++)
		{
			if(scores[i] > scores[i+1])
				return false; 
		}
		return true; 
		
	}
	public double finalAverage()
	{ 
		if(hasImproved())
			return average(scores.length/2,scores.length-1);
		else
			return average(0,scores.length-1);  
		
	}
	public String toString()
	{
		String temp = "";
		for(int i=0; i<scores.length;i++)
		{
			temp = temp+" "+scores[i];
		}
		return name+"'s scores are:" + temp;
	}
}