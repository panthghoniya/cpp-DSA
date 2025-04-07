#include <iostream>
using namespace std;
void addition(int a, int b){
    cout << a << "+" << b << "=" << a + b << endl;
}
void subtraction(int a, int b){
    cout << a << "-" << b << "=" << a - b << endl;
}
void multiplication(int a, int b){
    cout << a << "x" << b << "=" << a * b << endl;
}
void division(int a, int b){
    cout << a << "/" << b << "=" << a / b << endl;
}
void mod(int a, int b){
    cout << a << "%" << b << "=" << a % b << endl;
}
int main()
{
    int a, b, user;
    do
    {
        cout << "Press 1 for + " << endl;
        cout << "Press 2 for - " << endl;
        cout << "Press 3 for * " << endl;
        cout << "Press 4 for / " << endl;
        cout << "Press 5 for % " << endl;
        cout << "Press 0 for exit " << endl;

        cout << "enter the value : " << endl;
        cin >> user;

        switch (user)
        {
        case 1:
            cout << "a = " << endl;
            cin >> a;
            cout << "b = " << endl;
            cin >> b;
            addition(a, b);
            break;
        case 2:
            cout << "a = " << endl;
            cin >> a;
            cout << "b = " << endl;
            cin >> b;
            subtraction(a, b);
            break;
        case 3:
            cout << "a = " << endl;
            cin >> a;
            cout << "b = " << endl;
            cin >> b;
            multiplication(a, b);
            break;
        case 4:
            cout << "a = " << endl;
            cin >> a;
            cout << "b = " << endl;
            cin >> b;
            division(a, b);
            break;
        case 5:
            cout << "a = " << endl;
            cin >> a;
            cout << "b = " << endl;
            cin >> b;
            mod(a, b);
            break;
        case 0:
            cout << "exit" << endl;
            break;

        default:
            break;
        }
    } while (user != 0);
}