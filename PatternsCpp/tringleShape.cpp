#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "put some num to print stars";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// we are going to print now
// *
// **
// ***