// ****
// LeetCode Problem: 33. Search in Rotated Sorted Array 'medium'
// There is an integer array nums sorted in ascending order (with distinct values).
// Prior to being passed to your function, nums is possibly rotated at an unknown index k (1 <= k < nums.length)
// such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
// For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
// You must write an algorithm with O(log n) runtime complexity.
// ****

#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // st = left boundary, end = right boundary
        int st = 0, end = nums.size() - 1;

        // Binary search loop, runs until search space is empty
        while (st <= end) {
            // Find middle index
            // Using st + (end - st) / 2 avoids integer overflow
            int mid = st + (end - st) / 2;

            // Case 1: target found at mid
            if (nums[mid] == target) return mid;

            // Check if left half [st ... mid] is sorted
            // In a rotated array, at least one half is always sorted
            if (nums[st] <= nums[mid]) {
                // Left half is sorted

                // If target lies inside the sorted left half,
                // search only in left half
                if (target >= nums[st] && target < nums[mid]) {
                    end = mid - 1;
                }
                // Else target must be in right half
                else {
                    st = mid + 1;
                }
            }
            // Else right half [mid ... end] must be sorted
            else {
                // If target lies inside the sorted right half,
                // search only in right half
                if (target > nums[mid] && target <= nums[end]) {
                    st = mid + 1;
                }
                // Else target must be in left half
                else {
                    end = mid - 1;
                }
            }
        }

        // Target not found in whole array
        return -1;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = solution.search(nums, target);
    cout << "Index of target: " << result << endl; // Output: 4

    // More tests:
    // cout << solution.search(nums, 3) << endl; // -1, not present
    // cout << solution.search(nums, 4) << endl; // 0
    // cout << solution.search(nums, 7) << endl; // 3

    return 0;
}
