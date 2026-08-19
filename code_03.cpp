#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

// if we wanna do get this pattern then we have to look after n values
// n could be any thing but here its n = 4;

// 1234
// 1234
// 1234
// 1234