#include <iostream>
using namespace std;

int main()
{
    int user, box = 0;

    cout << "enter the value = ";
    cin >> user;

    while (user != 0)
    {
        user = user / 10;
        box++;
    }
    cout << box;
}
