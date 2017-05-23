#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <fstream>
using namespace std;
void gotoxy(short x, short y) 
    {
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
void DRAWBOX(int,int);
main()
{
    int boxcounter; 
	int boxnumber;
	int numboxes = 5;
	int boxwidth = 10;
	int boxheight = 4;
    for(boxcounter=0;boxcounter<5;boxcounter++)
    {
    getch();
	for(boxnumber=0;boxnumber<numboxes;boxnumber++)
	{
        DRAWBOX(boxwidth,boxheight);
        cout << "$";
		cout << endl;
	}
	cout << endl;
}
	getch();
}
void DRAWBOX(int,int)
{
     for(int i = 0; i < 10; i++)
     {
             cout << "$";
     }
}
