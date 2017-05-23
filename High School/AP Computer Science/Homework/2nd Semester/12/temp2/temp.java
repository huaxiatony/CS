import java.util.*;
class temp {
    public static void main(String args[])
    {
		//GameState j = new Chessy();
		Chess j = new Chess();
		GameDriver joe = new GameDriver(j);
		joe.play();
    }
}

/*Initial state: 	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	1	0	0	0	0	0	0	0
the number of moves is: 1
Final state: 	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	0	0	0	0	0	0	0	0
	1	0	0	0	0	0	0	0
the number of moves is: 1*/