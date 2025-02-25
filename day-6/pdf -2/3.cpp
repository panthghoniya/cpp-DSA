#include<iostream>
using namespace std;

int main(){
    int x =1 , y;
    
    cout << "enter the value :";
    cin >> y;

    do
    {
        if (x%2 == 0)
        {
            cout << x << " ";
       
        }
        x++;
        
    }
    while (x <= y);
    
}