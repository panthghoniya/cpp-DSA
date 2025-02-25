#include<iostream>
using namespace std;
 

int main(){
    int user,sum=0;

    cout<< "Enter the digit = ";
    cin>> user;

    for (int i = 1; i <= user; i++)
    {
     sum = sum + i;
  
    }
    cout<< " the sum is = " << sum;
    
  
    
}
