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
char quit = 'q';
int x = 7;
int y = 1;
for(int i = 0; i <5; i++)
 {
  gotoxy(1+i,1);
  cout << "**********";
 }  
 cout << endl;
 cout << "Press 'q' to quit"; 
 cin >> quit;
 while(quit != 'q')
 {
 for(int i = 0; i <5; i++)
 {
  gotoxy(1,x+i);
  cout << "**********";
  if(y%2==1)
  {
  gotoxy(1,x+i);
  cout << "!!!!!!!!!!";
  }
 }
 
 cout << endl;
 cout << "Press 'q' to quit"; 
 cin >> quit;
 x=x+7;
 y++;
 }
    getch();
}
