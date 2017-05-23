import java.util.*;
class temp {
    public static void main(String args[])
    {
	EasyReader in= new EasyReader();
	int joe=0,bob=0;
	String input="I like to eat chocolate donuts";
	System.out.println("Please input the number of rows: ");
	joe=in.readInt();
	System.out.println("Please input the number of columns: ");
	bob=in.readInt();
	RouteCipher tom = new RouteCipher(joe,bob);
	System.out.print(tom.encryptMessage(input));
	System.out.println("");
	System.out.println("The original message was: "+input);
    }
}


// E:\AP Comp Sci\Homework\2nd Semester\09>java -cp ; temp
// Please input the number of rows:
// 2
// Please input the number of columns:
// 3
// Ii kle  teoath occotlea duotns
// The original message was: I like to eat chocolate donuts

// E:\AP Comp Sci\Homework\2nd Semester\09>pause
// Press any key to continue . . .