#include<iostream>
using namespace std;

int main()
{
    int size ,tamp;


    cout << "enter the value : ";
    cin >> size;

    int arr[size];

    for (int  i = 0; i < size; i++)
    {
        cout << "enter the value of array : ";
        cin >> arr[i];
    }
    
    for (int  i = 0; i < size-1; i++)
    {
    for (int  j = 0; j < size-1; j++)
    {
        if (arr[j] > arr[j+1])
        {
            tamp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tamp;
        }
    }
    }
    for (int  i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        
    }
    
    return 0;
}