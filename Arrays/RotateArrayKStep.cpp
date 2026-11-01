// *****
LeetCode problum #189 Rotate Array 'medium'
// Given an integar array nums, roteate the array to the right by k steps, where K is non-negative.
// input nums = [1,2,3,4,5,6,7],k=3
// output [5,6,7,1,2,3,4]

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // In case k is greater than n
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};


int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    solution.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Output: Rotated array: [5 6 7 1 2 3 4]
