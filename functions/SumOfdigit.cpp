#include <iostream>

using namespace std;

int sumOfDigits(int num){
    int digSum = 0;

    while(num > 0){
        int lastDigit =  num %10;
        num = num / 10;
        digSum += lastDigit;
    }
    return digSum;
}

int main(){
    cout << "sum = " << sumOfDigits(2356) << endl;

    return 0;
}

// Now the answer is Sum = 16