#include<iostream>
using namespace std;

int main(){

    for (int i = 1; i < 5; i++)
    {
        if (i%2 == 1)
        {
            cout << "* * * * *" << endl;
        }
        else if ( i == 4)
        {
            cout << "*" << endl;
        }
        else
        {
            cout << "*       *"<< endl;
        }
        
    }
        cout << "*" << endl;
    
}