// base code file
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
main()
{
  // write code here
  
  gotoxy(10,10);
  cout << "happy";
  
  // leave the following line in all programs
  
      getch();
}
      
