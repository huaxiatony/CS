#include<iostream.h>;
int main()
{  
char end;
int num;
int a;
char at;
at = '@';
num = 1;

while(end != 'q')
{
 for(a=0;a<num;a++)
  {
    cout << at;
  }
  cout << endl;
  cin >> end;
  num++;
}
}
