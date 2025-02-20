#include<iostream>

using namespace std;

int main(){

    int a ,b ,c;

    cout << "enter the 1 value :  ";
    cin >> a;
    cout << "enter the 2 value :  ";
    cin >> b;
    cout << "enter the 3 value :  ";
    cin >> c;

   if (a > b)
   {
    if (a > c)
    {
        cout << "a is big ";
    }
    else
    {
        cout << "c is big ";
    }
    
   }
   else
   {
    if (b > c)
    {
        cout << "b is big ";
    }
    else
    {
        cout << "c is big ";
    }
   }
}