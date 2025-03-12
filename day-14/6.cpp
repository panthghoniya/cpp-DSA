#include <iostream>
using namespace std;

int main()
{
    int rowsize = 3, colsize = 3;
    int rowsize2 = 3, colsize2 = 3;
    int rowsize3 = 3, colsize3 = 3;

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

    int box2[rowsize2][colsize2];

    for (int row = 0; row < rowsize2; row++)
    {
        for (int col = 0; col < colsize2; col++)
        {
            cout << "enter the value : ";
            cin >> box2[row][col];
        }
    }
    for (int row = 0; row < rowsize2; row++)
    {
        for (int col = 0; col < colsize2; col++)
        {
            cout << box2[row][col] << ' ';
        }
        cout << endl;
    }

    int box3[rowsize][colsize];

    for (int row = 0; row < rowsize3; row++)
    {
        for (int col = 0; col < colsize3; col++)
        {
            box3[row][col] = box2[row][col] + box[row][col];

            cout << box3[row][col] << "  ";
        }
        cout << endl;
    }
  }