
 // 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45


#include<iostream>
using namespace std;

int main(){
    for (int row= 41; row <= 45; row++)
    {
        for (int col = 41; col <= row; col++)
        {
           cout<< col << " ";
        }
        cout<< endl; 
    }
    
}