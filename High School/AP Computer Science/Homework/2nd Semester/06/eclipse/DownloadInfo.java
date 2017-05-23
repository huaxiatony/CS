public class DownloadInfo {

private String name; 

public DownloadInfo(String title)
{
	name = title; 
	this.incrementTimesDownloaded(); 
}

public String getTitle(){return name;}

public void incrementTimesDownloaded()
{
	int counter=0; 
	counter++; 
}

/*public int getTimesDownloaded()
{
	return this.incrementTimesDownloaded()-1; 
}*/

}