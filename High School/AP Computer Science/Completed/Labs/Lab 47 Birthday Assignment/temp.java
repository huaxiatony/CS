import java.util.ArrayList;
import java.util.List; 
class temp {
    public static void main(String args[])
    {
		EasyReader in = new EasyReader("Data.txt");
		ArrayList<Student>c=new ArrayList<Student>(); 
		while(!in.eof()){
			Student temp = new Student(in.readWord(),in.readWord(),in.readInt(),in.readInt(),in.readInt());
			c.add(temp); 
		}
		
		//for each student in ArrayList c.
		for(Student j : c){System.out.println(j);}
		System.out.println(c.get(0).compareTo(c.get(1))); 
		
		// System.out.print(c);
		// #PSVMs should be short. 
		// #Ideally should be 2 lines 
		// #StudentCollection sue = new StudentCollection("Data.txt")
		// #And then we would SOP(sue.findClosestBirthday());
		// #PSVM should only have lines 16 & 17. 
    }
}

