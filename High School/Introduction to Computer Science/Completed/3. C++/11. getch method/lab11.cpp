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
    
for(int i = 0; i < 4; i++)
{
     gotoxy(1,1);
     cout << "******";   
}
for(int i = 0; i < 6; i++)
{
     gotoxy(i+1,5);
     cout << "*";   
}
for(int i = 0; i < 4; i++)
{
     gotoxy(1,2);
     cout << "*";   
}
for(int i = 0; i < 4; i++)
{
     gotoxy(1,3);
     cout << "*";   
}
for(int i = 0; i < 4; i++)
{
     gotoxy(1,4);
     cout << "*";   
}
for(int i = 0; i < 6; i++)
{
     gotoxy(6,2);
     cout << "*";   
}
for(int i = 0; i < 6; i++)
{
     gotoxy(6,3);
     cout << "*";   
}
for(int i = 0; i < 6; i++)
{
     gotoxy(6,4);
     cout << "*";   
}
for(int i = 0; i < 6; i++)
{
     gotoxy(6,5);
     cout << "*";   
}

char play = 'y';
int rvalue;

rvalue = random(99);
gotoxy(2,4);
cout << rvalue;


while(play = 'y')
{
rvalue = random(99);
gotoxy(2,4);
cout << rvalue;
play = getch();
}

getch();
}
