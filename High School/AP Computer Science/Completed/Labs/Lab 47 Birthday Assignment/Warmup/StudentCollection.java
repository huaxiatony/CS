// import java.util*;
import java.util.List;
import java.util.ArrayList;

public class StudentCollection
{
	private List<Student> group; 
	private String fname, lname; 
	private int day, month, year; 
	
	public StudentCollection(String file)
	{
		EasyReader in = new EasyReader("bday.txt");
		group = new ArrayList<Student>(); 
		String fname, lname; 
		int day, month, year; 
		Student temp; 
		// construct the ArrayList class variable
		// define 5 local variables
		// construct an EasyReader object with String file as the parameter
		// loop
		// 		read 5 values from file
		//		construct a Student object
		//		add Student to ArrayList<Student> (group)
		//		until eof
		while(!in.eof())
		{
			fname = in.readWord(); lname = in.readWord();
			day = in.readInt(); month = in.readInt(); year = in.readInt();
			temp = new Student(fname,lname,day,month,year); 
			group.add(temp); 
		}
	}
	
	public String toString()
	{
		return "The students' birthdays are: \n" + group;  
	}
}


// E:\AP Comp Sci\Completed\Labs\Lab 47 Birthday Assignment\Warmup>java -cp ; temp

// The students' birthdays are:
// [Greg Neat's birthday is on: 1/12/61
// , Molly Shelton's birthday is on: 1/14/94
// , Noah Stubblefield's birthday is on: 7/13/94
// , Elie Hussein's birthday is on: 3/31/94
// , Dongyeoul Kwak's birthday is on: 11/3/93
// , Kyle Yun's birthday is on: 3/5/94
// , Saem Lee's birthday is on: 11/30/94
// , Chris Kim's birthday is on: 12/29/93
// , David Yoon's birthday is on: 1/4/94
// , Zachary Edwards's birthday is on: 5/11/95
// , James Owen's birthday is on: 3/5/94
// , Heather Bodell's birthday is on: 5/4/94
// , Jay Rho's birthday is on: 2/8/95
// , Alex Lupinski's birthday is on: 12/16/94
// , Alec Wallace's birthday is on: 7/11/95
// , Michael Rinder's birthday is on: 6/24/94
// , Paul David's birthday is on: 2/5/94
// , Eric Ahn's birthday is on: 8/17/95
// , Richard Cho's birthday is on: 2/15/95
// , Jae Choi's birthday is on: 2/19/94
// , Anthony Zadikian's birthday is on: 1/23/94
// , Jiwon Eom's birthday is on: 8/1/93
// , Joyce Pak's birthday is on: 8/2/94
// , Julie Lim's birthday is on: 2/8/94
// , Tony Abdo's birthday is on: 9/3/94
// , Daniel Kellam's birthday is on: 12/20/93
// , Eugene Nam's birthday is on: 1/28/94
// , Will Pock's birthday is on: 11/12/93
// , Joel Woods's birthday is on: 7/18/94
// , Jae Lim's birthday is on: 11/18/95
// , Yechan Lew's birthday is on: 10/2/93
// , Sung Yean's birthday is on: 11/21/93
// , Aaron Kim's birthday is on: 4/26/93
// , Andre Aboulian's birthday is on: 8/23/94
// , Minsoo Lee's birthday is on: 7/7/94
// , NotSo Neat's birthday is on: 1/12/61
// ]
// E:\AP Comp Sci\Completed\Labs\Lab 47 Birthday Assignment\Warmup>pause
// Press any key to continue . . .