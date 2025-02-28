#include <iostream>
using namespace std;

int main()
{

    char box = 'a';

    do
    {

        cout << box << " ";
        box = box + 4;

    } while (box <= 'z');
}