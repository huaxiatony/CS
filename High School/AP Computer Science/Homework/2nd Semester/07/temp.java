import java.util.*;
class temp {
    public static void main(String args[])
    {
	TileGame game = new TileGame();
	NumberTile joe0 = new NumberTile(4,3,7,4);
	NumberTile joe1 = new NumberTile(6,4,3,3);
	NumberTile joe2 = new NumberTile(1,2,3,4);
	NumberTile joe3 = new NumberTile(3,2,5,2);
	NumberTile joe4 = new NumberTile(5,9,9,2);
	NumberTile tile1 = new NumberTile(4,2,9,2);
	NumberTile tile2 = new NumberTile(4,2,9,8);
	game.insertTile(joe0);
	game.insertTile(joe1);
	game.insertTile(joe2);
	game.insertTile(joe3);
	game.insertTile(joe4);
	
	System.out.println(game);
	game.insertTile(tile1);
	game.insertTile(tile2);
	System.out.println(game);
    }
}

/*<terminated> temp(5)[Java Application] C:\Program Files\Java\jre1.8.0_73\bin\javaw.exe (Mar 17, 2016, 11:42:52 PM)
Board consists of: [Tile Numbers: [2, 5, 9, 9], Tile Numbers: [2, 3, 2, 5], Tile Numbers: [6, 4, 3, 3], Tile Numbers: [4, 3, 7, 4], Tile Numbers: [4, 1, 2, 3]]
Board consists of: [Tile Numbers: [8, 4, 2, 9], Tile Numbers: [2, 9, 2, 4], Tile Numbers: [2, 5, 9, 9], Tile Numbers: [2, 3, 2, 5], Tile Numbers: [6, 4, 3, 3], Tile Numbers: [4, 3, 7, 4], Tile Numbers: [4, 1, 2, 3]]
*/