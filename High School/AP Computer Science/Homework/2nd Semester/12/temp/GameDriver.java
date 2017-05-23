import java.util.*;

class GameDriver implements GameState{
	private GameState game;

    public GameDriver(GameState gs)
	{
		game = gs;		
	}

	public void play()
	{
		System.out.println("Initial state: "+game);
		while(!game.isGameOver())
		{
		
		}
		System.out.println("Final state: "+game);
	}
	
}