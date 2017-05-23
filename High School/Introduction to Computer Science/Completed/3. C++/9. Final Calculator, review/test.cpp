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
int main()
{
for(int i = 0; i < 17; i++)
{
        gotoxy(i+10,10);
        cout << sym;
}    
for(int i = 0; i < 1; i++)
{
        gotoxy(10,11);
        cout << sym;
}
for(int i = 0; i < 1; i++)
{
        gotoxy(10,12);
        cout << sym;
}
for(int i = 0; i < 1; i++)
{
        gotoxy(10,13);
        cout << sym;
}
for(int i = 0; i < 1; i++)
{
        gotoxy(10,14);
        cout << sym;
}
for(int i = 0; i < 1; i++)
{
        gotoxy(10,15);
        cout << sym;
}        
for(int i = 0; i < 17; i++)
{
        gotoxy(i+10,16);
        cout << sym;
}
for(int i = 0; i < 1; i++)
{
        gotoxy(29,11);
        cout << sym;
}
for(int i = 0; i < 1; i++)
{
        gotoxy(29,12);
        cout << sym;
}
for(int i = 0; i < 1; i++)
{
        gotoxy(29,13);
        cout << sym;
}
for(int i = 0; i < 1; i++)
{
        gotoxy(29,14);
        cout << sym;
}
for(int i = 0; i < 1; i++)
{
        gotoxy(29,15);
        cout << sym;
}
    getch();
}
