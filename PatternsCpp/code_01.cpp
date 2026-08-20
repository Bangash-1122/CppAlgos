#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";

    cin >> n;

    for (int i = 0; i < n; i++)
    { // i =1 i<=n
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}


// for N values whatever the n is ?
// here the output depneds on thee user inpurt values
// thats why i do cin to put something value  number to print he design pattern in output.
