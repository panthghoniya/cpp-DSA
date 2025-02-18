#include<iostream>

using namespace std;
int main(){

    int x = 10;
    int y = 20;
 
    cout << x << endl;
    cout << y << endl;

    cout <<" ------------------------------------ " << endl ;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << x << endl;
    cout << y << endl;

}

