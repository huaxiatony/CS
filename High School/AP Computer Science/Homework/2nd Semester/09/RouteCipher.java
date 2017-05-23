public class RouteCipher
{
	private String[][] letterBlock;
	private int row; 
	private int col;
	private int num;
	public RouteCipher(int numRows, int numCols)
	{
		row=numRows; 
		col=numCols; 
		letterBlock = new String[row][col];
		num=row*col;
	}
	private void fillBlock(String str)
	{
		int n=0;
		while(num>str.length()){
			str=str+"A";}
		for(int i=0;i<letterBlock.length;i++){
			for(int j=0;j<letterBlock[0].length;j++){
				String input = str.substring(n,n+1);
				n++;
				letterBlock[i][j]=input;}}
	}
	private String encryptBlock()
	{
		String temp="";
		for(int i=0;i<letterBlock[0].length;i++){
			for(int j=0;j<letterBlock.length;j++){
				temp+=letterBlock[j][i];}}
		return temp;
	}
	public String encryptMessage(String message)
	{
		String temp="",temp2="";
		int m=0,n=message.length()%num;
		for(int i=0;i<message.length()/num;i++){
			temp=message.substring(m,m+num);
			fillBlock(temp);
			temp2+=encryptBlock();
			m+=num;}
		if(n!=0){
			temp=message.substring(m);
			fillBlock(temp);
			temp2+=encryptBlock();
			m+=num;}
		return temp2;
	}
	public String toString()
	{
		String temp="";
		for(int i=0;i<letterBlock.length;i++){
			for(int j=0;j<letterBlock[0].length;j++){
				temp+=letterBlock[i][j];}
			temp+="\n";}
		return temp;
	}
}
