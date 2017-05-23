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
main()
{
int numlines,i,a;
numlines = 15;
for(i=1;i<=numlines;i++)
{
for(a=1;a<=i;a++)
{
cout<< "*";
}
cout<<endl;
}
getch();
int z=0;
int numlines,i,a;
numlines = 15;
for(i=1;i<=numlines;i++)
{
for(a=1;a<=i;a++)
{
cout<< "$";
}
cout<<endl;
}
getch();

while(z=0)
{
for(i=1;i<=numlines;i++)
{
for(a=1;a<=i;a++)
{
cout<< "$";
}
cout<<endl;
}
}
}
