#include<Gaby.h>
void DRAWLINE();
int main()
{
  char play = 'y';
  DRAWLINE();
  srand(time(NULL));
  framedbox(9,9,10,10,'@');
  
  while(kbhit() == 0)
  {           
  gotoxy(13,14);
  cout << random(50);
  //cin >> play; 
  //play = getch(); This is for lab 11
   getch();
  }
  //framedbox(10,10,5,5,'#');
  getch();
}
void DRAWLINE()
{
     for(int i = 0; i < 5; i++)
     {
             cout << "@";
     }
}
