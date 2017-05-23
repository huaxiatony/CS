import java.util*;

public class Chess extends GameDriver
{
	private int[][] board;
	private int newMoves, row, col;
	private int [] x_Cord = {2,1,-1,-2,-2,-1,1,2};
	private int [] y_Cord = {1,2,2,1,-1,-2,-2,-1};
	
	public Chess()
	{
		board = new int[8][8];
		newMoves = 0;
		row = (int)(Math.random()*8);
		col = (int)(Math.random()*8);
		newMoves++;
		board[row][col]=newMovess;
		this.toString();
	}
	private boolean isValid(int r,int c)
	{
		if(r>8 || r<0 || c>8 || c<0)
		{
			return false;
		}
		return true;
	}
	public void makeMove(String move)
	{
		newMoves++;
		int tempInt = 0;
		if(move.equals("0"))
			tempInt = 0;
		else if(move.equals("1"))
			tempInt = 1;
		else if(move.equals("2"))
			tempInt = 2; 
		else if(move.equals("3"))
			tempInt = 3;
		else if(move.equals("4"))
			tempInt = 4;
		else if(move.equals("5"))
			tempInt = 5;
		else if(move.equals("6"))
			tempInt = 6;
		else if(move.equals("7"))
			tempInt = 7;
		else if(move.equals("8"))
			tempInt = 8;
		row+=x_Cord[tempInt];
		col+=y_Cord[tempInt];
		board[row][col]=newMoves;
	}
	public void play()
	{
		int tempRow=0,tempCol=0,temp=0;
		while(temp!=8)
		{
			tempRow = row+x_Cord[temp];
			tempCol = col+y_Cord[temp];
			if(isValid(tempRow,tempCol))
			{
				String possibleMove = ""+temp;
				makeMove(possibleMove);
			}
			else
				temp++;
		}
	}
	public String toString()
	{
	String temp = " ";
	for(int r =0; r<board.length;r++){
		for(int c = 0; c<board[0].length;c++)
			temp+="\t"+board[r][c] ;
		temp+="\n\t ";}
	return temp + "the number of moves is: " + newMoves;
	}
	
}