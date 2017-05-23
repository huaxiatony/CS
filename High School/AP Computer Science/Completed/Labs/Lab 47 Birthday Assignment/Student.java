public class Student implements Comparable{
	private String fn, ln;
	
	private int mn, dy, yr; 
	
	public Student(String firstName, String lastName, int month, int day, int year) {
		fn = firstName; ln = lastName; mn = month; dy = day; yr = year; 
	}
	
	public Student() {
		String firstName = "", lastName = "";
		int month = 0, day = 0, year = 0; 
	}
	
	public String getFirstName(){return fn;}
	
	public String getLastName(){return ln;}
	
	public int getMonth(){return mn;}
	
	public int getDay(){return dy;}
	
	public int getYear(){return yr;}
	
	public int compareTo(Object other){
		if(dy>((Student)other).getDay()){return 1;}
		else if(dy<((Student)other).getDay()){return -1;}
		else{return 0;}
	}
	
	
	@Override
	public String toString() {
		return fn+" "+ln+"'s birthday is on: "+mn+"/"+dy+"/"+yr;
	}
}

