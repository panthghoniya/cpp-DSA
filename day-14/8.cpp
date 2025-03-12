#include <iostream>
using namespace std;

int main()
{
    int rowsize = 3, colsize = 3;

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

            cout << box[row][col] << ' ';
        }
        cout << endl;
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            if (box[row][col] == box[0][col])
            {
                cout << box[row][col] << ' ';
            }
        }
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            if (box[row][col] == box[row][2])
            {
                if (box[row][col] == box[0][2])
                {
                }
                else
                {
                    cout << box[row][col] << ' ';
                }
            }
        }
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            if (box[row][col] == box[2][1])
            {

                cout << box[row][col] << ' ';
            }
        }
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            if (box[row][col] == box[2][0])
            {

                cout << box[row][col] << ' ';
            }
        }
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            if (box[row][col] == box[1][0] || box[row][col] == box[1][1])
            {
                cout << box[row][col] << ' ';
            }
        }
    }
}

//   [0][0] [0][1] [0][2]
//   [1][0] [1][1] [1][2]
//   [2][0] [2][1] [2][2]