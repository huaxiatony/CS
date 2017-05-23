public class Player
{
	private String name;
	public Player(String aName)
	{
		name = aName;
	}
	public getName()
	{
		return name;
	}
	public String getNextMove(GameState state)
	{
		return this.getCurrentMoves();
	}
}