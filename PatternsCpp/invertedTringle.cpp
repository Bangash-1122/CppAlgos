#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {

        // spaces
        for (int j = 1; j < i; j++)
        { // here the j is not less than i so both are zeros i=0 j=0  this will not exeucte.
            cout << " ";
        }

        // numb
        for (int k = n; k >= i; k--) // k=4  if k>= i; of first loop ; k-- >>> k=3
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}

// output
// 1111
//  222
//   33
//    4