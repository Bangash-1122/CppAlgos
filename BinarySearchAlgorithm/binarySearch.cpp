#include <iostream>
#include <vector>

using namespace std;

// Function to find the target in a sorted array
// Returns the index if found, otherwise returns -1
int binarySearch(const vector<int>& arr, int target) {

    // Initialize the left and right boundaries
    int left = 0;
    int right = static_cast<int>(arr.size()) - 1;

    // Continue searching while the search range is valid
    while (left <= right) {

        // Find the middle index (avoids integer overflow)
        int mid = left + (right - left) / 2;

        // If target is greater, search the right half
        if (target > arr[mid]) {
            left = mid + 1;
        }

        // If target is smaller, search the left half
        else if (target < arr[mid]) {
            right = mid - 1;
        }

        // Target matches the middle element
        else {
            return mid; // Target found
        }
    }

    // Target does not exist in the array
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // Odd
    int target = 12;
    int result1 = binarySearch(arr1, target);
    cout << "Element found at index: " << result1 << endl;

    vector<int> arr2 = {-1, 0, 3, 4, 5, 9, 12}; // Even
    int target2 = 0;
    int result2 = binarySearch(arr2, target2);
    cout << "Element found at index: " << result2 << endl;
    return 0;
}

// Output => Element found at index: 6
// Output => Element found at index: 1

// Important points
// 1. Sorted array required: Binary search only works correctly when the array is sorted in the expected order (ascending in this implementation).
// 2. Time complexity: O(log n), because each iteration eliminates half of the remaining elements.
// 3. Space complexity: O(1), because it uses only a few variables.
// 4. Middle calculation: left + (right - left) / 2 is safer than (left + right) / 2 because it avoids potential integer overflow.
