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
   char sym;
    int width = 0; int height = 0; int x = 0; int y = 0;
    
    cout << "Please enter the symbol:" ;
    cin >> sym;
    cout << "Please enter the box height:" ;
    cin >> height;
    cout << "Please enter the box width:" ;
    cin >> width;
    cout << "Please enter the x coordinate:" ;
    cin >> x;
    cout << "Please enter the y coordinate:" ;
    cin >> y;
    
    for(int i = 0; i < height; i++)
    {
            gotoxy(x, y+i);
            
            if(i == 0)
            {
               for(int i = 0; i < width; i++)
               {
                  cout << sym;
               }
            }
            else if(i == height - 1)
            {
              for(int i = 0; i < width; i++)
              {
                cout << sym;
              }
            }
            else
            {
              cout << sym;
              for(int i = 0; i < width - 2; i++)
              {
           
              }
              cout << sym;      
            } 
    }
    cout << endl;
    system("pause");
}
