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
int main()
{   
    char sym;
    int length = 0;
    char hvd;
    
    cout << "Please enter the symbol:";
    cin >> sym;
    cout << "Please enter the line length:";
    cin >> length;
    cout << "horizontal or vertical or diagonal (h/d/v)";
    cin >> hvd;
    
    if(hvd == 'h')
    {
    for(int i = 0; i < length ; i++)
    {
             cout << sym;
    }
    }
    else if(hvd == 'v')
    {
     for(int i = 0; i < length; i++)
    {
             cout << sym << endl;
    }
    }
    else if(hvd == 'd')
    {
     for(int i = 0; i < length; i++)
      {       gotoxy(i, i+4);
              cout << sym;
      }
    }

    cout << endl;
    system("pause");
}
