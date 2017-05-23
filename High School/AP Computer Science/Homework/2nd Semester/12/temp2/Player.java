import java.util.ArrayList;

public class Player
{
	private String name;
	
	public Player(String aName){	name = aName;	}
	
	public String getName(){	return name;	}
	
	 public String getNextMove(GameState state)
	 {
		  ArrayList<String> joe = state.getCurrentMoves();
		  if(joe.size()==0)
			  return "no moves available";
		  else{
			  int rand = (int)(Math.random()*joe.size());
			  return joe.get(rand);
		  }
	 }
}
