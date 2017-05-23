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
 char sym = '@';
 int x = 0;
 int y = 3;
 char erase = ' ';
 gotoxy(5,5);
 cout << sym;
 int pause = 10000;
 while(1 == 1)
 {
 for(int i = 0; i < 80; i++)
 {
  for(int b = 0; b < pause; b++)
  {
  gotoxy(5+i,5);
  cout << sym;          
  }
 
 gotoxy(5+i,5);
 cout << erase;
 } 
 
 }
 getch(); 
    
    
    
}
