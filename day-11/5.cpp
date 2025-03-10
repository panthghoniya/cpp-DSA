#include<iostream>
using namespace std;

int main(){
    int size;
    cout<< "enter the size of array = ";
    cin>> size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout<< " enter the value {"<< i << "} = ";
        cin>> box[i];
    }

    for (int i = 0; i < size; i++)
    {
        
        if (i == 0)
        {
            cout<< box[i];
        }
        else if (i%2 == 0){
            cout<< "";
        }

        else
        {
            cout<< box[i];
        }
        
        
    }
    
    
}