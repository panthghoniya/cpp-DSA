#include <iostream>
using namespace std;

int main()
{
    int rowsize = 3, colsize = 3;
    int user;

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

    cout << "enter the value : ";
    cin >> user;

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            if (user == box[row][col])
            {
                cout << "box [" << row << "][" << col << "] = " << box[row][col];
                break;
            }
        }
    }
}