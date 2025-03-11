#include<iostream>
using namespace std;

int main(){
 
    int user;
    double box = 0,text,bill;

    cout << "enter yor unit : ";
    cin >> user;

    if (user > 0 && user <= 50)
    {
        box = user * 0.50;

    }
    else if (user > 50 && user <= 150)
    {
        bill = (user -50 ) * 0.75;
        box = box + 25 + bill;
    }
    else if (user > 150 && user <= 300)
    {
        bill = (user - 150) * 1.20;
        box = box + 25 + 75 + bill;
    }
    else
    {
        bill = (user - 300) * 1.50;
        box = box + (25 + 75 + 180) + bill;
    }

    cout << box;
}
