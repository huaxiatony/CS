import java.util.*;
public interface GameState
{
	boolean isGameOver();
	Player getWinner();
	Player getCurrentPlayer();
	ArrayList<String> getCurrentMoves();
	void makeMove(String m);
	String toString();
}