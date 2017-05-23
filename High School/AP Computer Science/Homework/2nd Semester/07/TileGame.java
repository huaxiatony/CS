import java.util.*;
public class TileGame
{
	private ArrayList<NumberTile> board;
	
	public TileGame(){board=new ArrayList<NumberTile>();}
	
	private int getIndexForFit(NumberTile tile)
	{
		if(board.size()==0||tile.getRight()==board.get(0).getLeft())
			return 0;
		for(int i=1;i<board.size();i++){
			if(tile.getLeft()==board.get(i-1).getRight() && tile.getRight()==board.get(i).getLeft())
				return i;}
		if(tile.getLeft()==board.get(board.size()-1).getRight())
			return board.size();
		return -1; 
	}
	
	public boolean insertTile(NumberTile tile)
	{
		int index = getIndexForFit(tile),num = 1;
		while (index==-1 && num<4){
			tile.rotate();
			index = getIndexForFit(tile);
			num++;}
		if(index!=-1)
			board.add(index, tile);
		
		return (index!=-1);
	}
	@Override
	public String toString()
	{
		return "Board consists of: " + board;
	}
}