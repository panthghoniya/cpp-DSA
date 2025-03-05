#include<iostream>
using namespace std;

int main(){
    for (int row= 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
           cout<< col << " ";
        }
        for (int k = 4; k >= row; k--)
        {
            cout << "    ";
        }
        
        for (int j = row; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout<< endl; 
    }
    
}