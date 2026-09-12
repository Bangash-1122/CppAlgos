#include <iostream>
using namespace std;

int main() {
    // int size = 5;
    // int marks[size];

    // for (int i = 0; i < size; i++) {
    //     cin >> marks[i];
    // }

    // for (int i = 0; i < size; i++) {
    //     cout << marks[i] << " " << endl;
    // }

    int nums [] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        // if (nums[i] < smallest) {
        //     smallest = nums[i];
        // }
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    cout << "Smallest number is: " << smallest << endl;
    cout << "Largest number is: " << largest << endl;
    return 0;
}

// smallest  = -24
// largest  = 22