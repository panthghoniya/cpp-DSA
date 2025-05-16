#include<iostream>
using namespace std;

int main(){

    int box=1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << box << " ";
            box++;
        }
        cout << endl;
    }
    
} 