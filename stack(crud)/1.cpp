#include <iostream>
using namespace std;

void push(int top, int arr[], int pushval)
{
    arr[top] = pushval;

    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " ";
    }
}
void pop(int top, int arr[])
{

    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " ";
    }
}
void peek(int top, int arr[])
{
    cout << arr[top];
}
void isEmpty(int top, int arr[])
{
    if (arr[top] == -1)
    {
        cout << "The stack is empty";
    }
    else
    {
        cout << "The stack is not empty";
    }
}
void isFull(int top, int arr[], int size)
{
    if (top == size - 1)
    {
        cout << "the stack is full";
    }
    else
    {
        cout << "The stack Empty";
    }
}
void stacksize(int top)
{
    cout << top;
}

int main()
{
    int user, size;

    cout << "enter the size of array = ";
    cin >> size;

    int top = -1;

    int *arr = new int[size];
    do
    {
        cout << "press 1: Push" << endl;
        cout << "press 2: Pop" << endl;
        cout << "press 3: Peek" << endl;
        cout << "press 4: isEmpty" << endl;
        cout << "press 5: isFull" << endl;
        cout << "press 6: size" << endl;
        cout << "press 0: Exit" << endl;
        cout << "Enter the above option = ";
        cin >> user;
 
        switch (user)
        {  
        case 1:
            top++;
            int pushval;
            cout << "insert the push value = ";
            cin >> pushval;
            push(top, arr, pushval);
            cout << "---------------------------------" << endl;
            break;
        case 2:
            top--;
            pop(top, arr);
            cout << "---------------------------------" << endl;
            break;
        case 3:
            peek(top, arr);
            cout << "---------------------------------" << endl;
            break;
        case 4:

            isEmpty(top, arr);
            cout << "---------------------------------" << endl;
            break;
        case 5:

            isFull(top, arr, size);
            cout << "---------------------------------" << endl;
            break;
        case 6:

            stacksize(top);
            cout << "---------------------------------" << endl;
            break;

        default:
            cout << "invalid input";
            break;
        }
    } while (user != 0);
}