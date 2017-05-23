import java.util.*;;

public class Chess implements GameState
{
	private int [][] board;
	private int newMoves, row ,col, pcc;
	private int [] xx = {2,1,-1,-2,-2,-1,1,2};
	private int [] yy = {1,2,2,1,-1,-2,-2,-1};
	
	public Chess()
	{
		board = new int[8][8];
		newMoves = 1;
		row = (int)(Math.random()*8);
		col = (int)(Math.random()*8);
		board[row][col]=newMoves;
		toString();
	}
	 
	private boolean isValid(int r, int c)
	{
	if(r>8 || c>8 || r<0 || c<0 || board[r][c]>0){
		return false;}
	return true;
	}
	public boolean isGameOver()
	{
		if(pcc>0)
			return false
		return true;
	}
	public ArrayList<String> getCurrentMoves()
	{
		
	}
	
	public void makeMove(String tt)
	{
	int pcc = 0;
	newMoves++;
	if(tt.equals("0"))
		pcc=0;
	else if(tt.equals("1"))
		pcc=1;
	else if(tt.equals("2"))
		pcc=2;
	else if(tt.equals("3"))
		pcc=3;
	else if(tt.equals("4"))
		pcc=4;
	else if(tt.equals("5"))
		pcc=5;
	else if(tt.equals("6"))
		pcc=6;
	else if(tt.equals("7"))
		pcc=7;
	else if(tt.equals("8"))
		pcc=8;
	row = row+xx[pcc];
	col = col+yy[pcc];
	board[row][col]=newMoves;
	}
	
	public void play()
	{
	int tempRow = 0,tempCol = 0, temp = 0;
	while(temp!=8){
		tempRow = row+xx[temp];
		tempCol = col+yy[temp];
		if(isValid(tempRow,tempCol)){
			String t = ""+temp;
			makeMove(t);}
		else
			temp++;}
	}
	
	public String toString()
	{
	String temp = " ";
	for(int r =0; r<board.length;r++){
		for(int c = 0; c<board[0].length;c++){
			temp= temp+"\t"+board[r][c];}
		temp = temp+"\n\t ";}
	return temp+ "the number of moves is: " + newMoves;
	}
	
}