#include<iostream>
using namespace std;

int main(){

    for (int row = 5; row >= 1; row--)
    {
        for (int i = 2; i <= row; i++)
        {
            cout << "- ";
        }
        for (int j =row; j <= 5; j++)
        {
            cout << row<< " ";
        }
    cout << endl;
        
    }
    
}