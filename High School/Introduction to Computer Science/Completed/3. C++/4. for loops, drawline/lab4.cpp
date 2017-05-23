#include<iostream.h>;
int main()
{   
    char sym;
    int length = 0;
    char hv;
    
    cout << "Please enter the symbol:";
    cin >> sym;
    cout << "Please enter the line length:";
    cin >> length;
    cout << "horizontal or vertical (h/v)";
    cin >> hv;
    
    if(hv == 'h')
    {
    for(int i = 0; i < length ; i++)
    {
             cout << sym;
    }
    }
    else if(hv == 'v')
    {
     for(int i = 0; i < length; i++)
    {
             cout << sym << endl;
    }
    } 
    
    system("pause");
}
