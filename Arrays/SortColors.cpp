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
#include <algorithm>  // For swap()

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {

        // low: Position where the next 0 should be placed
        int low = 0;

        // mid: Pointer to the current element
        int mid = 0;

        // high: Position where the next 2 should be placed
        int high = static_cast<int>(nums.size()) - 1;

        // Continue until all elements are processed
        while (mid <= high) {

            if (nums[mid] == 0) {

                // Move 0 to the beginning
                swap(nums[low], nums[mid]);

                // Move both pointers forward
                low++;
                mid++;

            } else if (nums[mid] == 1) {

                // 1 is already in the correct middle region
                mid++;

            } else {

                // Move 2 to the end
                swap(nums[mid], nums[high]);

                // Reduce the unsorted region
                high--;

                // Do not increment mid here
                // because the swapped value must be checked
            }
        }
    }
};

int main() {

    Solution solution;

    // Input array:
    // 0 = Red, 1 = White, 2 = Blue
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    // Sort the array in-place
    solution.sortColors(nums);

    // Print the sorted array
    cout << "Output: [";

    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i];

        if (i < nums.size() - 1) {
            cout << ", ";
        }
    }

    cout << "]" << endl;

    return 0;
}

// Expected Output:
// Output: [0, 0, 1, 1, 2, 2]

// Time Complexity: O(log n) — The algorithm processes each element in the array once, leading to linear time complexity.
// Space Complexity: O(1)

