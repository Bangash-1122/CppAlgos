#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        // spaces n-i-1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // numbers i+1
        for (int k = 1; k <= i + 1; k++) // k=0; k< i+1 this will also work
        {
            cout << k;
        }

        // nums 2 print
        for (int l = i; l > 0; l--)
        {
            cout << l;
        }

        cout << endl;
    }

    // the second portion loop

    return 0;
}

//  output       here we can get spaes by ( n-i-1 )
//   1         i=0 with 3 space
//  121        i=1 spaces =2
// 12321       i=2 spaces = 1
// 1234321      i=3 space =0;

// when the i =1 the 1 print
// 1  i=1
// 21  i=2
// 321  i=3 last