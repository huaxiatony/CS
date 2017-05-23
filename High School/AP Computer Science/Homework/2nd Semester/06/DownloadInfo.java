import java.util.*;
public class DownloadInfo {
private String name; 
private int counter; 

public DownloadInfo(String title){name = title; counter=1;}

public String getTitle(){return name;}

public void incrementTimesDownloaded(){counter++;}

public int getDownload(){return counter;}

}