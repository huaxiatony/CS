#include<iostream.h>;
int main()
{   
    int a = 0;
    int b = 0;
    int stop;
    char op;
    cout<< "Please enter the first number:";
    cin>>a;
    
    cout<< "Please enter the second number:";
    cin>>b; 
    
    cout<< "Please enter the operation:";
    cin>>op;
    
    if(op == '+')
    {
          cout << a + b;
    }
    else if(op == '-')
    {
         cout << a - b;
    }
    else if(op == '*')
    {
         cout << a * b;
    }
    else if(op == '/')
    {
         cout << a / b;
    }
    cout<< "";
    cin>>stop;
}


