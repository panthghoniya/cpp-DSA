#include<iostream>
using namespace std;

int main(){
    int size,max1=0,max2=0;
    cout<< "enter the size = ";
    cin>> size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout<< " enter the value = ";
        cin>> box[i];
    }

    for (int j = 0; j < size; j++)
    {
        if (max1 < box[j])
        {
           max2=max1;
           max1=box[j];
        }
        if(max2<box[j] && box[j]<max1){
            max2=box[j];
        }
    }
        cout<< "the second largest value is = " << max2;
    
    
}