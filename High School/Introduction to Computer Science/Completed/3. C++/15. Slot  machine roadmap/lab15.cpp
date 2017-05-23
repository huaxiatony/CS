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
 int height = 20;
 int width = 75; 
 
 
 for(int i=0;i<width;i++)
 {
  cout << "$";
 }
 for(int i=0;i<height;i++)
 {
 cout << endl << "$";
 }
 gotoxy(0,20);
 for(int i=0;i<width;i++)
 {
  cout << "$";
 }
 for(int i=0;i<21;i++)
 {
 gotoxy(75,0+i);
 cout << "$";
 }
 for(int i=0;i<5;i++)
 {
 gotoxy(10,0+i);
 cout << "$";
 }
 for(int i=0;i<11;i++)
 {
 gotoxy(0+i,5);
 cout << "$";
 }
char play = 'y';
int s1;
int s2;
int s3;
int money=5.00;
gotoxy(3,3);
cout << "$" << money;

while(play == 'y' && money > 0)
{
while(kbhit() == 0)
{
gotoxy(10,10);
s1 = random(50);
cout << s1;

gotoxy(20,10);
s2 = random(50);
cout << s2;

gotoxy(30,10);
s3 = random(50);
cout << s3;
}
getch();
getch();
}
if((s1 != s2) && (s2 != s3))
{
gotoxy(10,18);
money = money-0.05;
}
else if((s1 == s2) && (s2 == s3))
{
gotoxy(10,18);
money = money + 0.50;
cout << "Play Again? Press q to quit"; 
cin >> play;
}
getch();
} 
