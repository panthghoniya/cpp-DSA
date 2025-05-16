#include <iostream>
using namespace std;

int main()
{

  int user;
  int size = 0;
  int box[size];

  do
  {
    cout << "press 1 for add :" << "\n";
    cout << "press 2 for Read :" << "\n";
    cout << "press 3 for Update :" << "\n";
    cout << "press 4 for Delete :" << "\n";
    cout << "press 0 for exit :" << "\n";

    cout << "enter the value :";
    cin >> user;
    cout << "------------------------------------" << endl;

    switch (user)
    {
    case 1:

      int arrayvalue;
      int indexno;

      size++;
      if (size == 1)
      {
        cout << "enter the value :";
        cin >> arrayvalue;

        box[0] = arrayvalue;
      }
      else
      {
        cout << "enter the index no. :";
        cin >> indexno;
        cout << "------------------------------------" << endl;

        cout << "enter the value :";
        cin >> arrayvalue;

        for (int i = size; i > indexno; i--)
        {
          box[i] = box[i - 1];
        }
        box[indexno] = arrayvalue;
      }
      cout << "------------------------------------" << endl;
      cout << "------------------------------------" << endl;
      break;
    case 2:
      for (int i = 0; i < size; i++)
      {
        cout << "box[" << i << "] = " << box[i] << " ";
      }
      cout << endl;
      cout << "------------------------------------" << endl;
      cout << "------------------------------------" << endl;
      break;
    case 3:
      int Updateindexno;

      cout << "enter the index no. : ";
      cin >> Updateindexno;
      cout << "------------------------------------" << endl;

      cout << "enter the value :";
      cin >> arrayvalue;

      box[Updateindexno] = arrayvalue;

      break;
      case 4:

            if (size > 0)
            {
              int big;
                cout << "enter your indexno: ";
                cin >> big;
                if (big >= 0 && big < size)
                {
                    for (int i = big; i < size; i++)  
                    {
                        box[i] = box[i + 1];
                    }
                    size--;
                }
                else
                {
                    cout << "invalid index number of array" << endl;
                }
            }
            else
            {
                cout << "please press 1 and create value!" << endl;
            }
            cout << "--------------------------------------------------" << endl;
            break;

    default: 
      break;
    }
  } while (user != 0);
}