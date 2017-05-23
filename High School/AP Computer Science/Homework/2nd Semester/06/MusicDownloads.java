import java.util.*;
public class MusicDownloads{
	
private List<DownloadInfo> downloadList; 

public MusicDownloads()
{
	downloadList = new ArrayList<DownloadInfo>();
}	

public DownloadInfo getDownloadInfo(String title)
{
	for(int i=0;i<downloadList.size();i++)
		if(downloadList.get(i).getTitle().equals(title))
			return downloadList.get(i);
	return null; 	
}

public void updateDownloads(List<String> titles)
{
	DownloadInfo temp;
	for(int i=0;i<titles.size();i++)
	{
		temp=getDownloadInfo(titles.get(i));
		if(temp==null)
			downloadList.add(new DownloadInfo(titles.get(i)));
		else
			temp.incrementTimesDownloaded();
	}
}

public String findMaxDownloads()
{
	int temp=-1; 
	String high ="";
	for(int i=0;i<downloadList.size();i++)
		if(downloadList.get(i).getDownload()>temp)
		{
			temp=downloadList.get(i).getDownload();
			high=downloadList.get(i).getTitle();
		}
	return high;
}

}
