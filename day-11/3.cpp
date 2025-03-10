#include<iostream>

using namespace std;

int main(){

     int size;

     cout << "enter the size of array : ";
     cin >> size;
     int box[size];



     for (int  i = 0; i < size; i++)
     {
        cout << "enter the value of box[" << i << "] =";
        cin >> box[i];
     }
     for (int i = 0; i < size; i++)
     {
        cout << "box[" << i << "] =";
        cout << box[size-1-i];
        cout << endl;
     }
     


}