#include<iostream>
using namespace std;

int main(){
    int user;
    
    cout<< "Enter your marks : ";
    cin>> user;

    if (user>=80)
    {
        cout<<"GRADE A (PASS)";
    }
    else if (user>=60 && user<=79)
    {
        cout<<"GRADE B (PASS)";
    }
    else if (user>=50 && user<=59)
    {
        cout<<"GRADE c (PASS)";
    }
    else if (user<=49 && user>=33)
    {
        cout<<"GRADE c (PASS)";
    }
    else if (user<0)
    {
        cout<<"not valid marks";
    }
    else{
        cout<<"(FAIL)";
    }
    
    
}