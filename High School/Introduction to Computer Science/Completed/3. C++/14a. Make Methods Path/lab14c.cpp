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
void DRAWLINE(int);
main()
{
    int i,a;
	int numlines=15;

	for(i=1;i<numlines;i++)
	{
		DRAWLINE(i);
		cout << endl;
	}
	cout << endl;
	getch();
}
void DRAWLINE(int)
{
 int a,i;
 int numlines = 15;
 for(i=1;i<=numlines;i++)
 {
 for(a=1;a<=i;a++)
 {
  cout<< "$";
  }
  cout<<endl;
  }
   getch();
}
