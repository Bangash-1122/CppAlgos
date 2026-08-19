#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {

        // spaces
        for (int j = n; j > i + 1; j--)
        {
            cout << "-";
        }
        cout << "*";

        if (i != 0)
        {
            for (int k = 0; k < 2 * i - 1; k++)
            {
                cout << "-";
            }
            cout << "*";
        }
        cout << endl;
    }
    // bottpm

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "-";
        }
        cout << "*";

        if (i != n - 2)
        {
            // spaces
            for (int k = 0; k < 2 * (n - i) - 5; k++)
            {
                cout << "-";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// output

//
//---*       i=0 star=1
//--*-*      i=1 star=2 space=1
// *---*     i=2 star=2  space=3
//*-----*    i=3 star=2  space=5   here look at the pattern odd number incremment if i have i=4 spaces wll be 7
//-*---*   loop n-1 /
//--*-*
//---*