#include<iostream>
using namespace std;

int main(){

    int box = 11;

    for (int row= 1; row < 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
           cout<< box << " ";
           box++;
        }
        cout<< endl; 
    }
    
}