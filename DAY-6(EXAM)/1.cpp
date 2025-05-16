#include <iostream>

using namespace std;

int main()
{

    int user, bhai = 0, ans = 1, sub;

    cout << "enter the value :";
    cin >> user;

    for (int i = 0; i <= user; i++)
    {
        cout << bhai << " ";
        sub = bhai + ans;  
        bhai = ans;
        ans = sub;
    }
}