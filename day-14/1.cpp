#include <iostream>
using namespace std;

int main()
{
    int rowsize = 3, colsize = 3;
    int r1 = 0;
    int r2 = 0;
    int r3 = 0;

    int box[rowsize][colsize];

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            cout << "enter the value : ";
            cin >> box[row][col];
        }
    }

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            cout << box[row][col];
        }
        cout << endl;
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            if (row == 0)
            {
                r1 += box[row][col];
            }
        }
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {

            if (row == 1)
            {
                r2 += box[row][col];
            }
        }
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {

            if (row == 2)
            {
                r3 += box[row][col];
            }
        }
    }
    cout << r1 << ' ' << r2 << ' ' << r3;
}