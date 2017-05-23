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
int random(int r)
{
    return rand()% r + 1;
}  
int main()
{
    srand(time(NULL)); 
char sym = '*';
for(int i = 0; i < 4; i++)
{
     gotoxy(1,1);
     cout << "******";   
}
for(int i = 0; i < 6; i++)
{
    cout << sym << endl;
}
for(int i = 0; i < 6; i++)
{
   cout << sym << endl;
}
for(int i = 0; i < 6; i++)
{
   gotoxy(6,1);
   cout << "*";
}


getch();
}
