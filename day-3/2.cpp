#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d, e, f;

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
    cout << "enter the 1 value :  ";
    cin >> f;

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    if (a > f)
                    {
                        cout << "a is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
                else
                {
                    if (a > f)
                    {
                        cout << "a is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
            }
            else
            {
                if (d > e)
                {
                    if (d > f)
                    {
                        cout << "d is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
                else
                {
                    if (d > f)
                    {
                        cout << "d is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    if (c > f)
                    {
                        cout << "c is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "e is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
            }
            else
            {
                if (d > e)
                {
                    if (d > f)
                    {
                        cout << "d is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "e is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
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
                    if (d > f)
                    {
                        cout << "d is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "e is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
            }
            else
            {
                if (b > e)
                {
                    if (b > f)
                    {
                        cout << "b is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "e is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
            }
        }
        else
        {
            if (c > d)
            {
                if (c > e)
                {
                    if (c > f)
                    {
                        cout << "c is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
                else
                {
                    if (e > f)
                    {
                        cout << "e is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
            }
            else
            {
                if (d > e)
                {
                    if (e > f)
                    {
                        cout << "e is max ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
                else
                {
                    if (d > f)
                    {
                        cout << "d is max  ";
                    }
                    else
                    {
                        cout << "f is max ";
                    }
                }
            }
        }
    }
}