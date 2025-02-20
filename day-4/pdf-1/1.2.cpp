#include <iostream>
using namespace std;

int main()
{
    int user;

    cout << "Enter any number: ";
    cin >> user;

    if (user > 0)
    {
        cout << "This number is Positive";
    }
    else if (user == 0)
    {
        cout << "This number is Neutral";
    }
    else
    {
        cout << "This number is Negative";
    }
}