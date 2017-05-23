import java.util.*;
class GameDriver
{
	private int i; 
	private GameState state;

    public GameDriver(GameState initial){	state = initial;		}

	public void play()
	{
		i = 0;
		System.out.println("Initial state:"+state);
		while(!state.isGameOver())
		{
			String temp = getCurrentMoves().get(i);
			String temp2 = getCurrentMoves().get(i+1);
			i++;
			state.makeMove(getCurrentMoves().get(i));
			//state.makeMove();
		}
		System.out.println("Final state:"+state);
	}
	
	public ArrayList<String> getCurrentMoves()
	{
		ArrayList<String> moves = new ArrayList<String>();
		
		int row = (int)(Math.random()*8);
		int col = (int)(Math.random()*8);
		String temp = Integer.toString(row);
		moves.add(temp);
		String temp2 = Integer.toString(col);
		moves.add(temp2);
		
		return moves;
	}
}