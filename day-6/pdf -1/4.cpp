#include<iostream>
using namespace std;

int main(){
    int x, y = 1;
    
    cout << "enter the value :";
    cin >> x;

    while (x >= y)
    {
        if (x%2 != 0)
        {
            cout << x << " ";
       
        }
        x--;
        
    }
    
}