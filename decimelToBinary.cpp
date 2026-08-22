#include <iostream>
using namespace std;

int decToBinary(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans; // binary form
}

int main()
{
    int decNum = 50;
    // cout << decToBinary(decNum) << endl; // 110010

    for (int i = 1; i <= 10; i++)
    { // 1 t0 10 binary num
        cout << decToBinary(i) << endl;
    }

    return 0;
}