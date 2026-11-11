#include <iostream>
#include <vector>

using namespace std;

// int binarySearch(vector<int>& arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left <= right) {
//         int mid = (left + right) / 2;

//         if(target > arr[mid]) {
//             left = mid + 1;
//         } else if(target < arr[mid]) {
//             right = mid - 1;
//         } else {
//             return mid; // Target found
//         }
//     }

//     return -1; // Target not found
// }


// int main() {
//     vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // Odd
//     int target = 12;
//     int result1 = binarySearch(arr1, target);
//     cout << "Element found at index: " << result1 << endl;

//     vector<int> arr2 = {-1, 0, 3, 4, 5, 9, 12}; // Even
//     int target2 = 0;
//     int result2 = binarySearch(arr2, target2);
//     cout << "Element found at index: " << result2 << endl;
//     return 0;
// }

// // Output => Element found at index: 6
// // Output => Element found at index: 1