#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        for (int k = n; k > i; k--)
        {
            cout << ch;
        }
        ch = ch + 1;
        cout << endl;
    }
}
// output
//   i=0 space zero
//    i=1 space 1
//    i=2 space 2
//    i=3 space 3

// but here we did with char

// AAAA
//  BBB
//   CC
//    D