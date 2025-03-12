#include <iostream>
using namespace std;

int main()
{
    int rowsize = 3, colsize = 3;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

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
            if (col == 0)
            {
                c1 += box[row][col];
            }
        }
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {

            if (col == 1)
            {
                c2 += box[row][col];
            }
        }
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {

            if (col == 2)
            {
                c3 += box[row][col];
            }
        }
    }
    cout << c1 << ' ' << c2 << ' ' << c3;
}