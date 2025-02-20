#include <iostream>
using namespace std;

int main()
{
    int v1, v2;

    cout << " Enter a value of the first number: ";
    cin >> v1;
    cout << " Enter a value of the second number: ";
    cin >> v2;

    if (v1 < v2)
    {
        cout << "The minimum value is: " << v1;
    }
    else
    {
        cout << "The minimum value is: " << v2;
    }
}