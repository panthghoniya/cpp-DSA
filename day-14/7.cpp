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
          if (box[row][col] <= 0)
          {
            cout << 0<<' ';
          }
          else
          {
            cout << box[row][col] << ' ';
          }
          
        }
        cout << endl;
    }
  }