// ****
// Leet Code problem: #88. 'easy' Merge Sorted Array
// ***
// Your are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.
// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

//  Input  nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
//  Output [1,2,2,3,5,6]

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Start from the end of both arrays
        int i = m - 1; // Last index of nums1's valid elements
        int j = n - 1; // Last index of nums2
        int k = m + n - 1; // Last index of nums1's total capacity

        // Merge in reverse order
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If there are remaining elements in nums2, copy them
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {

    // Create example sorted arrays and their sizes.
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution solution;
    solution.merge(nums1, m, nums2, n);

    // Print the merged array
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}

//Output: 1 2 2 3 5 6
