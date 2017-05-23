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
	{
		if(downloadList.get(i).getTitle().equals(title))
			return downloadList.get(i);}
	return null; 	
}
public void updateDownLoads(List<String> titles)
{
	for(int i=0;i<downloadList.size();i++)
	{
		for(int j=0;j<titles.size();j++)
		{
			if(titles.get(j).equals(downloadList.get(i).getTitle()))
				downloadList.get(i).incrementTimesDownloaded();
			else
			{
				downloadList.add(new DownloadInfo(titles.get(j)));
			}
		}
	}
}
/*public String findMaxDownloads()
{
	int temp=0,highest=0;
	String tempString="";
	for(int i=0;i<downloadList.size();i++){
		for(int j=0;j<downloadList.size();j++)
		{
			if(downloadList.get(i).getTimesDownloaded()>temp)
			{
				temp=downloadList.get(i).getTimesDownloaded(); 
				highest=temp;
			}
		}
		tempString=downloadList.get(highest).getTitle();
	}
	return tempString;
}*/

}