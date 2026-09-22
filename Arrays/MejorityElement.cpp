/*****************************************************
 LeetCode #169 - Majority Element
 Difficulty: Easy
******************************************************/

/*
 Given an array nums of size n, return the majority element.

 The majority element is the element that appears
 more than n/2 times.

 We can assume that the majority element always exists
 in the array.

 Algorithm Used:
 Boyer-Moore Voting Algorithm

 Time Complexity: O(n)
 Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    int majorityElement(vector<int>& nums) {

        // freq keeps track of the vote/count
        int freq = 0;

        // ans stores the current candidate
        // for the majority element
        int ans = 0;

        // Traverse the whole array
        for (int i = 0; i < nums.size(); i++) {

            // If frequency becomes 0,
            // choose the current element as a new candidate
            if (freq == 0) {
                ans = nums[i];
            }

            // If the current element is the same
            // as our candidate, increase its vote
            if (ans == nums[i]) {
                freq++;
            }
            else {

                // If current element is different
                // from our candidate, decrease its vote
                freq--;
            }
        }

        // Since the problem guarantees that
        // a majority element exists,
        // the final candidate will be the answer
        return ans;
    }
};

int main() {

    // Example array
    vector<int> nums = {1, 2, 2, 1, 1};

    // Create object of Solution class
    Solution obj;

    // Call majorityElement() and print the result
    cout << obj.majorityElement(nums) << endl;

    return 0;
}



// Sorting approach Optimized

//  int majorityElement(vector<int>& nums) {
//     int n = nums.size();

//     // sorting
//     sort(nums.begin(), nums.end());

//     //freq count
//     int freq = 1,
//     ans = nums[0];
//     for(int i=1; i<n; i++){
//         if(nums[i] == nums[i -1]) {
//             freq++;
//         } else {
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq > n/2){
//             return ans;
//         }
//     }
//     return ans;
//  }


// Brute force approch

// int majorityElement(vector<int>& nums) {
//     int n = nums.size();
//  for(int val : nums) {
//   int freq = 0;

//     for(int el : nums){
//         if(el == val){
//             freq++;
//         }
//     }
//     if(freq > n/2){
//         return val;
//     }
// }
// }
