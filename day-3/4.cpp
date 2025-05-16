#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d;

    cout << "enter the 1 value :  ";
    cin >> a;
    cout << "enter the 2 value :  ";
    cin >> b;
    cout << "enter the 3 value :  ";
    cin >> c;
    cout << "enter the 4 value :  ";
    cin >> d;


    if (a > b)
    {
       if (a > c)
       {
         if (a > d)
         {
            cout << "a is big ";
         }
         else
         {
            cout << "d is big ";
         }
       } 
       else
       {
        if (c > d)
        {
            cout << "c is big ";
        }
        else
        {
            cout << "d is big ";
        }
       }
    }
    else
    {
        if (b > c)
        {
           if (b > d)
           {
            cout << "b is big ";
           }
           else
           {
            cout << "d is big ";
           }
        }
        else
        {
            if (c > d)
            {
                cout << "c is big ";
            }
            else
            {
                cout << "d is big ";
            }
        }
    }
}