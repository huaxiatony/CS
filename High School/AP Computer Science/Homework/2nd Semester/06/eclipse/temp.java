import java.util.*;
class temp {
    public static void main(String args[])
    {
		EasyReader in = new EasyReader("songs.txt");
		MusicDownloads joe = new MusicDownloads(); 
		List<String> stringList = new ArrayList<String>();
		String song; 
		while(!in.eof())
		{
			song=in.readWord(); 
			stringList.add(song);
		}
		
		System.out.println(joe.updateDownLoads(stringList));
		//System.out.println(songList.findMaxDownloads());
    }
}
