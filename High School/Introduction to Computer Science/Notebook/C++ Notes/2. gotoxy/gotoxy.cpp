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
//////////////
int main()
{
 //write code here
 for(int i = 0; i <10; i++)
 {
  gotoxy(10,i+10);
  cout << "happy";
 }
 for(int i = 0; i <10; i++)
 {
  gotoxy(i+20,i+20);
  cout << "apple";
 }
 for(int i = 0; i <10; i++)
 {
  gotoxy(i+15,i);
  cout << "boy";
 }
 for(int i = 0; i <10; i++)
 {
  gotoxy(20,i+10);
  cout << "*****";
 }
  //gotoxy(11,11);
  //cout << "happy";
 //leave the following line in all porgrams
  getch();
}
