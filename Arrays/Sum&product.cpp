#include <iostream>
using namespace std;

void calculateSum(int arr[], int size) {

    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++) {

        sum = sum + arr[i];
        product = product * arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
}

int main() {

    int arr[] = {1, 2, 3, 4};
    int size = 4;

    calculateSum(arr, size);

    return 0;
}

//outPut /// /// 
//  Sum = 10
// Product = 24
