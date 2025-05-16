#include <iostream>

using namespace std;

int main()
{

    int user, box = 0;

    cout << "enter the value :";
    cin >> user;

    for (int i = 1; i <= 10; i++)
    {
        box = user * i;

        cout << user << " x " << i << " = " << box << endl;
    }
}