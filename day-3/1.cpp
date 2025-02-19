#include<iostream>

using namespace std;

int main(){

    int a ,b ,c ,d,e;

    cout << "enter the 1 value :  ";
    cin >> a;
    cout << "enter the 1 value :  ";
    cin >> b;
    cout << "enter the 1 value :  ";
    cin >> c;
    cout << "enter the 1 value :  ";
    cin >> d;
    cout << "enter the 1 value :  ";
    cin >> e;

    if (a > b)
    {
        if (a > c) 
        {
            if (a > d)
            {
                if (a > e)
                {
                    cout << "a is big";
                    
                }
                else
                {
                    cout << "e is big";

                }
            }
            else
            {
                if (d > e)
                {
                    cout << "b is big";
                    
                }
                else
                {
                    cout << "e is big";

                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    cout << "c is big";
                    
                }
                else
                {
                    cout << "e is big";

                }
            }
            else
            {
                if (d > e)
                {
                    cout << "d is big";
                    
                }
                else
                {
                    cout << "e is big";
                    
                }
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                if (d > e)
                {
                    cout << "b is big";
                    
                }
                else
                {
                    cout << "e is big";
                    
                }
                
            }
            else
            {
                if (b > e)
                {
                    cout << "b is big";
                    
                }
                else
                {
                    cout << "e is big";

                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    cout << "c is big";
                    
                }
                else
                {
                    cout << "d is big";

                }
            }
            else
            {
                if (d > e)
                {
                    cout << "d is big";
                }
                else
                {
                    cout << "e is big";

                }
            }
        }
    }
}