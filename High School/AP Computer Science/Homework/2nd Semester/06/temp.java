import java.util.*;
class temp {
    public static void main(String args[])
    {
		EasyReader in = new EasyReader("songs.txt");
		ArrayList<String> song = new ArrayList<String>();
		while(!in.eof())
			song.add(in.readLine());
		MusicDownloads joe=new MusicDownloads();
		joe.updateDownloads(song);
		System.out.println(joe.findMaxDownloads());
    }
}


// E:\AP Comp Sci\Homework\2nd Semester\06>java -cp ; temp
// Mrs. Robinson

// E:\AP Comp Sci\Homework\2nd Semester\06>pause
// Press any key to continue . . .