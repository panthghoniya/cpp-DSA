#include<iostream>

using namespace std;

int main(){
    int user,ans ;

    cout << "enter the value :";
    cin >> user;

    for (int i = 1; i <= 10; i++)
    {
        ans = user*i;

        cout << user  << " x " << i << " = " << ans << endl;
    }
}