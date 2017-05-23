import java.util.*;

class GameDriver// implements GameState
{
	private GameState state;

    public GameDriver(GameState initial){	state = initial;		}

	public void play()
	{
		System.out.println("Initial state: "+state);
		while(!state.isGameOver())
		{
			Chess.play();
			Chess.makeMove();
		}
		System.out.println("Final state: "+state);
	}
	
	// public boolean isGameOver()
	// {
		// if(!this.play())
			// isGameOver = true;
		// isGameOver = false; 
	// }
	
}