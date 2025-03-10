#include<iostream>
using namespace std;

int main(){

    int size, box;
    cout << "enter the value : ";
    cin >> size;
    int array[size];

   for (int i = 0; i < size; i++)
   {
    cout << "enter the value : ";
    cin >> array[i];
   }

   for (int i = 0; i < size; i++)
   {
    if (box > array[i])
    {
        box = array[i];
    }
    
   }
   cout << box;
}