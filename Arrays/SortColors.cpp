// ****
// Leet Code problem: Sort Colors #75 'medium'
// You are given an array nums with n objects colored red, white, or blue,
// sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the colors red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.
//  input: nums = [2,0,2,1,1,0]
// output: [0,0,1,1,2,2]
// ****


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0; // Pointer for the next position of 0
        int mid = 0; // Current element under consideration
        int high = nums.size() - 1; // Pointer for the next position of 2

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
