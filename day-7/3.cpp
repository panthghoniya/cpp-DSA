#include <iostream>
using namespace std;

int main()
{
    int user, last = 0, first = 0, ans;

    cout << "enter the value = ";
    cin >> user;

    last = user % 10;

    while (user > 10)
    {
        user = user / 10;
        first = user % 10;
    }
    ans = first + last;
    cout << first << "+" << last << "=" << ans;
}
