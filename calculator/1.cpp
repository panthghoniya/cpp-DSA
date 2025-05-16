#include <iostream>
using namespace std;

void addition(int a, int b) {
    cout << a << " + " << b << " = " << a + b << endl;
    cout << "-------------------------------" << endl;
}
void subtraction(int a, int b) {
    cout << a << " - " << b << " = " << a - b << endl;
    cout << "-------------------------------" << endl;

}
void multiplication(int a, int b) {
    cout << a << " x " << b << " = " << a * b << endl;
    cout << "-------------------------------" << endl;
}
void division(int a, int b) {
        cout << a << " / " << b << " = " <<(float) a / b << endl;
        cout << "-------------------------------" << endl;
}
void mod(int a, int b) {
        cout << a << " % " << b << " = " << a % b << endl;
        cout << "-------------------------------" << endl;
}
int main() {
    int a, b, user;

    do {
        cout << "Press 1 for + " << endl;
        cout << "Press 2 for - " << endl;
        cout << "Press 3 for * " << endl;
        cout << "Press 4 for / " << endl;
        cout << "Press 5 for % " << endl;
        cout << "Press 0 for exit " << endl;
        cout << "-------------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> user;

        if (user != 0) {
            cout << "Enter value for a: ";
            cin >> a;
            cout << "Enter value for b: ";
            cin >> b;
        }

        switch (user) {
            case 1:
                addition(a, b);
                break;
            case 2:
                subtraction(a, b);
                break;
            case 3:
                multiplication(a, b);
                break;
            case 4:
                division(a, b);
                break;
            case 5:
                mod(a, b);
                break;
            case 0:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
            cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (user != 0);
}