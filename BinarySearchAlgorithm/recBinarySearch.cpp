
#include <iostream>
#include <vector>

using namespace std;

// Recursive Binary Search
int recBinarySearch(const vector<int>& arr, int target, int st, int end) {

    // Check if the search range is valid
    if (st <= end) {

        // Find the middle index
        int mid = st + (end - st) / 2;

        // Search in the second (right) half
        if (target > arr[mid]) {
            return recBinarySearch(arr, target, mid + 1, end);
        }

        // Search in the first (left) half
        else if (target < arr[mid]) {
            return recBinarySearch(arr, target, st, mid - 1);
        }

        // Target found
        else {
            return mid;
        }
    }

    // Target not found
    return -1;
}

int main() {

    // Test Case 1: Odd-sized array
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;

    cout << recBinarySearch(arr1, tar1, 0, arr1.size() - 1) << endl;

    // Test Case 2: Even-sized array
    vector<int> arr2 = {-1, 0, 3, 4, 5, 9};
    int tar2 = 0;

    cout << recBinarySearch(arr2, tar2, 0, arr2.size() - 1) << endl;

    return 0;
}

/*
Output:
6
1

Time Complexity:
Best Case:    O(1)
Average Case: O(log n)
Worst Case:   O(log n)

Space Complexity:
O(log n) - Recursive call stack
*/
