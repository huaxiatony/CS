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
    int a = 0;
    int b = 0;
    char sym; 
    char op;
    
    cout << "Please enter the character:";
    cin >> sym;
    cout << "Please enter the first number:";
    cin >> a; 
    cout << "Please enter the operation:";
    cin >> op;
    cout << "Please enter the second number:";
    cin >> b;
    
    if(op == '+')
    {
    gotoxy(12,15);
    cout << a << "+" << b << "=" << a + b;
    }
    else if(op == '-')
    {
    gotoxy(12,15);
    cout << a << "-" << b << "=" << a - b;
    }
    else if(op == '*')
    {
    gotoxy(12,15);
    cout << a << "*" << b << "=" << a * b;
    }
    else if(op == '/')
    {
    gotoxy(12,15);
    cout << a << "/" << b << "=" << a / b;
    }
    cout <<endl;
    
   for(int i = 0; i < 20; i++)
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
for(int i = 0; i < 20; i++)
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
    
    cout << endl;
    cout << endl;
    cout << endl;
    system("pause");
    
}
