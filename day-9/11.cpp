#include <iostream>
using namespace std;

int main()
{

    for (int row = 1; row <= 5; row++)
    {
        for (int i = 5; i > row; i--)
        {
            cout << "  ";
        }
        
        for (int col = 1; col < row; col++)
        {
            cout << "*" << " ";
        }
        for (int j = row; j >= 1; j--)
        {
            cout << "*" <<" ";
        }
        cout << endl;
    }
}