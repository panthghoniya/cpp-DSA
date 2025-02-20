#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter maths marks : ";
    cin >> a;
    cout << "Enter science marks : ";
    cin >> b;
    cout << "Enter english marks : ";
    cin >> c;

    cout << float(a + b + c) / 3;
}