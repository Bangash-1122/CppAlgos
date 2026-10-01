// ****
// Leet Code problem: #35. 'easy' Search Insert Position
// Given a sorted array of distinct integers and a target value, return the index of the target is found .
// If not return the would be it it were inseted in order 
//  You must write an algorithm with O(log n) runtime complexity.
//  optimized solution: use binary search to find the target or the insertion point in O(log n) time complexity.

#include <iostream>
#include <vector>

using namespace std;


class Solution {
    public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid; // Target found
            } else if (nums[mid] < target) {
                left = mid + 1; // Search in the right half
            } else {
                right = mid - 1; // Search in the left half
            }
        }

        // If not found, 'left' is the insertion point
        return left;
    }
};

int main() {

    // Create an example sorted array and a target value.
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    Solution solution;
    int index = solution.searchInsert(nums, target);

    cout << "The index of the target " << target << " is: " << index << endl;

    return 0;
};
// output: The index of the target 5 is: 2
