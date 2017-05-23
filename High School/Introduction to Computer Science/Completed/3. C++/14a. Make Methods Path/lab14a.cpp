#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <fstream>
using namespace std;
void gotoxy(short x, short y) {
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
void DRAWLINE();
main()
{
	int boxcounter=0;
	int boxheight=4;
	DRAWLINE();
	cout << endl;
	DRAWLINE();
	cout << endl;
	DRAWLINE();
	cout << endl;
	cout << "hit a key and you will see alot more...." << endl;
	getch();

	for(boxcounter=0;boxcounter<5;boxcounter++)
	{
		for(int i=0;i<boxheight; i++)
		{
			DRAWLINE();
			cout << endl;
		}
		cout << endl;
	}
getch();
}
void DRAWLINE()
{
     for(int i = 0; i < 10; i++)
     {
             cout << "$";
     }
}
