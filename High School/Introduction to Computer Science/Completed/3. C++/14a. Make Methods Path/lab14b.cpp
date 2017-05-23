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
void DRAWBOX();
main()
{
	DRAWBOX();
	cout << endl;
	DRAWBOX();
	cout << endl;
	DRAWBOX();
	cout << endl;
	cout << endl;
	getch();

	int boxcounter;

	for(boxcounter=0;boxcounter<5;boxcounter++)
	{
		DRAWBOX();
		cout << endl;
	}
getch();
}
void DRAWBOX()
{
     for(int i = 0; i < 10; i++)
     {
             cout << "$";
     }
}
