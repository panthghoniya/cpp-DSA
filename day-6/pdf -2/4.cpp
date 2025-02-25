#include<iostream>
using namespace std;

int main(){
    int user,box=0,ans=1,box2;

    cout<< "Enter the value = ";
    cin>> user;

    for (int i = 0; i <= user; i++)
    {
        cout<< box << " ";
        box2 = box + ans;
        box = ans;
        ans = box2;
        
    }
    
}