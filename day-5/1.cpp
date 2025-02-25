#include <iostream>
using namespace std;

int main()
{
    int user, eng, guj, hindi;

    cout << "press 1 for english" << endl;
    cout << "gujarati mate 2 dabavo" << endl;
    cout << "hindi ke liye 3 dabaye" << endl;
    cout << "choose 1 option from this message = ";
    cin >> user;

    cout << "-------------------------------------------------------------" << endl;

    switch (user)
    {
    case 1:
        cout << "press 1 for recharge" << endl;
        cout << "press 2 for check balance" << endl;
        cout << "press 3 for customer care" << endl;
        cout << "choose 1 option from this message = ";
        cin >> eng;

        cout << "-------------------------------------------------------------" << endl;
        switch (eng)
        {
        case 1:
            cout << "choose your plan : " << endl;
            cout << "press 1 for (299 for 15 days) : " << endl;
            cout << "press 2 for (450 for 2 month) : " << endl;
            cout << "press 3 for (1999 for 1 year) : " << endl;
            break;

        case 2:
            cout << "your balance is going to over";

            break;

        case 3:
            cout << "what help you want";

            break;

        default:
            cout << "NO PLAN AVAIBLE";
            break;
        }
        break;

    case 2:
        cout << "recharge mate 1 dabavo" << endl;
        cout << "check balance  mate 2 dabavo" << endl;
        cout << "customer care mate 3 dabavo" << endl;
        cout << "Ama thi ek vastu pasand karo = ";
        cin >> guj;

        cout << "-------------------------------------------------------------" << endl;
        switch (guj)
        {
        case 1:
            cout << "tamaru recharge pasand kro" << endl;
            cout << "press 1 for (299 for 15 days) : " << endl;
            cout << "press 2 for (450 for 2 month) : " << endl;
            cout << "press 3 for (1999 for 1 year) : " << endl;
            break;

        case 2:
            cout << "tamaru balance samapt thava aivu che";

            break;

        case 3:
            cout << "tamre su help joi che niche janavo";

            break;

        default:
            cout << "KOI MAHITI NATHI";
            break;
        }
        break;

    case 3:
        cout << "apna plan choose kro" << endl;
        cout << "recharge ke liye 1 dabaye" << endl;
        cout << "check balance ke liye 2 dabaye " << endl;
        cout << "customer care ke liye 3 dabaye " << endl;
        cout << "is me se koi ek plan select karo = ";
        cin >> hindi;

        cout << "-------------------------------------------------------------" << endl;
        switch (hindi)
        {
        case 1:
            cout << "tamaru recharge pasand kro" << endl;
            cout << "press 1 for (299 for 15 days) : " << endl;
            cout << "press 2 for (450 for 2 month) : " << endl;
            cout << "press 3 for (1999 for 1 year) : " << endl;
            break;

        case 2:
            cout << "apka balance khatam hone aya he";

            break;

        case 3:
            cout << "apko kya help chahiye niche bataye";

            break;
        default:
            cout << "koi plan avaible nathi";
            break;
        }
    default:
        cout << "program ended";
        break;
    }
}