#include<iostream>

using namespace std;
int main(){

    int x = 10;
    int y = 20;
    int z;
 
    cout << x << endl;
    cout << y << endl;

    cout <<" ------------------------------------ " << endl ;

    z = x;
    x = y;
    y = z;

    cout << x << endl;
    cout << y << endl;

}

