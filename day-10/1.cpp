#include<iostream>
using namespace std;

int main(){

    int size,ans = 0;

    cout << "enter the size of array :";
    cin >> size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter the valu :";
        cin >> box[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans = ans + box[i];
    }
    
    float box2 = ans / size ;

    cout << box2;
}