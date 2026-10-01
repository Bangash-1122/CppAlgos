/**
 * LeetCode #26 - Remove Duplicates from Sorted Array
 * Difficulty: Easy
 *
 * Given an integer array nums sorted in non-decreasing order,
 * remove the duplicates in-place so that each unique element
 * appears only once.
 *
 * Keep the relative order of the elements the same.
 * Return the number of unique elements.
 */

#include <iostream>
#include <vector>

using namespace std;


class Solution {

public:

    int removeDuplicates(vector<int>& nums) {

        // If the array is empty, there are no unique elements.
        if (nums.empty())
            return 0;


        // 'i' keeps track of the position
        // where the next unique element should be placed.
        int i = 0;


        // Start 'j' from the second element.
        // 'j' scans through the entire array.
        for (int j = 1; j < nums.size(); j++) {


            // Compare the current element with
            // the last unique element.
            if (nums[j] != nums[i]) {


                // We found a new unique element,
                // so move 'i' one position forward.
                i++;


                // Copy the new unique element
                // into the next unique position.
                nums[i] = nums[j];
            }
        }


        // 'i' is an index, so the number of unique
        // elements is i + 1.
        return i + 1;
    }
};


int main() {

    // Create an example sorted array.
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};


    // Create an object of the Solution class.
    Solution solution;


    // Call removeDuplicates() and store
    // the number of unique elements.
    int newLength = solution.removeDuplicates(nums);


    // Print the number of unique elements.
    cout << "New length: " << newLength << endl;


    return 0;
}


/*
Output:

New length: 5

The first 5 positions of nums are now:

[1, 2, 3, 4, 5]

The remaining positions after the first 5
are not important for this LeetCode problem.
*/
