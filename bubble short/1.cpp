#include <iostream>
using namespace std;

int main()
{
    int size, temp;
    cout << "enter the array size = ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {

        cout << "enter the value = ";
        cin >> arr[i];
    }

    for (int i = 0; i <= size - 1; i++)
    {
        for (int j = 0; j <= size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {     
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
