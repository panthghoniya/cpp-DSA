#include<iostream>
using namespace std;

int main(){

    int size; // 3

    cout << "enter the value or array :";
    cin >> size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box [" << i <<"] :";
        cin >> box[i];
        
    }



    int size2; // 3

    cout << "enter the value or array :";
    cin >> size2;

    int box2[size2];

    for (int i = 0; i < size2; i++)
    {
        cout << "box [" << i <<"] :";
        cin >> box2[i];

    }


    
    int size3;
    if (size == size2)
    {
        size3 = size;

        int box3[size3];

        for (int i = 0; i < size3; i++)
        {
            box3[i] = box2[i] + box[i];
            cout << box3[i] << " ";
        }
    }
    else{

        cout << "input the same size for addition";
    }


}