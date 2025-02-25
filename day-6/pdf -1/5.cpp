#include<iostream>

using namespace std;

int main(){

    int fy,sy;

    cout << "enter the fy :";
    cin >> fy;
    cout << "enter the sy :";
    cin >> sy;

    while (fy <= sy)
    {
        if (fy%4 == 0)
        {
            cout << fy << " ";

        }
        fy++;
        
    }
    
}