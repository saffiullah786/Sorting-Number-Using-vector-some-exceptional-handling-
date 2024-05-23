#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int i, d,b;
    int a,q;

    vector<int> ok;
    do
    {
    abc:
        cout << "Enter Amount Of Numbers You Want To Sort :" << endl;
        cin >> a;
        while (cin.fail() || a <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

            cout << "Invaid Input" << endl;
            goto abc;
        }

        system("cls");

        cout << "Enter Numbers For Sorting  : ";
        for (i = 0; i < a; i++)
        {
            cin >> d;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter Valid Number " << endl;
                cin >> d;
            }

            ok.push_back(d);
        }
        system("cls");
        sort(ok.begin(), ok.end());
        cout << "Sorted Numbers are : ";
        for (auto po : ok)
        {
            cout << " " << po;
        }
        cout << endl;
          cout   << endl;
        ok.clear();
        cout << "Enter \'00\' to quit the program : " << endl;
        cin >> q;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter Valid Number " << endl;
            cin>>q;
        }

    } while (q != 00);
}
