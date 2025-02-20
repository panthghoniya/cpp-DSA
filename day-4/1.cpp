#include<iostream>
using namespace std;

int main(){
 
    int user,ans;
    double box = 0;

    cout << "enter yor unit : ";
    cin >> user;

    if (user >= 50 )
    {
         user = user - 50;
         ans = 50 * 0.50;  
         box = box + ans; 
    }
    else
    {
        ans = user * 0.50;
        box = box + ans;
    }
    if (user >= 100)
    {
        user = user - 100;
        ans = 100 * 0.75;
        box = box + ans;
    }
    else
    {
        ans = user * 0.75;
        box = box + ans;
    }
    if (user >= 150)
    {
        user = user - 150;
        ans = 150 * 1.20;
        box = box + ans;
    }
    else
    {
        ans = user * 1.20;
        box = box + ans;
    }
    if (user >= 250)
    {
        ans = user * 1.50;
        box = box + ans;
    }
    else
    {
        ans = user * 1.50;
        box = box + ans;
    }
    
    cout << box;
}
