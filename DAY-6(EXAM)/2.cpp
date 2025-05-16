#include <iostream>

using namespace std;

int main()
{

    int user, ans = 0;

    cout << "enter the value :";
    cin >> user;

    for (int i = 0; i <= user; i++)
    {
        ans = ans + i;
    }
    cout << ans;
}