#include <iostream>

using namespace std;

int binToDecimal(int binNum){

    int ans = 0, pow = 1;

    while (binNum > 0)
    {
        int lastDigit = binNum % 10;
        ans += (lastDigit * pow);
        pow *= 2;
        binNum /= 10;
    }

    return ans; // decimal form
}

int main(){

    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int decimalNumber = binToDecimal(binaryNumber);// put the binary number in there and see your output
    cout << "Decimal equivalent: " << decimalNumber << endl;


    return 0;
}