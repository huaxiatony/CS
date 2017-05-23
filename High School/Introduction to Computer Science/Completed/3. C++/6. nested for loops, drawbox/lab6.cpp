#include <iostream.h>;

int main()
{
    char sym;
    int width = 0;
    int height = 0;
    
    cout << "Please enter the symbol:" ;
    cin >> sym;
    cout << "Please enter the box height:" ;
    cin >> height;
    cout << "Please enter the box height:" ;
    cin >> width;
    
    for(int i = 0; i < height ; i++)
    {
            
         for(int i = 0; i < width ; i++)
         {
            cout << sym;
            
         }
         cout << endl;
    }
    
    
    cout << endl;
    
    system("pause"); 
    
}
