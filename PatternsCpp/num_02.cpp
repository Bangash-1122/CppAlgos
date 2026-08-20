#include <iostream>
using namespace std;
int main()
{

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--) // here when i =0   j = 0+1 = 1;     when i=1 j=1+1=2  j-- >> j becomes 1 check 1>0 true cout j
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// 1
// 2 1
// 3 2 1
// 4 3 2 1