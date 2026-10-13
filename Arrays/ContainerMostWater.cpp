/*
 * LeetCode Problem #11: Container With Most Water
 * Difficulty: Medium
 *
 * Given an integer array 'height', find two vertical lines
 * that form a container holding the maximum amount of water.
 *
 * Example:
 * Input:  [1, 8, 6, 2, 5, 4, 8, 3, 7]
 * Output: 49
 *
 * Approach: Two Pointers
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        // Initialize pointers at both ends of the array.
        int left = 0;
        int right = height.size() - 1;

        // Store the maximum water area found.
        int max_area = 0;

        // Continue until the two pointers meet.
        while (left < right) {

            // Calculate the distance between the two lines.
            int width = right - left;

            // Water height is limited by the shorter line.
            int current_height = min(height[left], height[right]);

            // Calculate the water area for these two lines.
            int current_area = width * current_height;

            // Update the maximum area if a larger area is found.
            max_area = max(max_area, current_area);

            // Move the pointer at the shorter line inward.
            // Moving the taller line cannot increase the area
            // while the shorter line remains the limiting height.
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        // Return the maximum amount of water.
        return max_area;
    }
};

int main() {
    Solution solution;

    // Example input array.
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    // Print the maximum container area.
    cout << solution.maxArea(height) << endl;

    return 0;
}

/*
 * Output: 49
 *
 * Explanation:
 * The maximum area is formed by the lines at
 * indices 1 and 8, with heights 8 and 7.
 *
 * Width = 8 - 1 = 7
 * Height = min(8, 7) = 7
 * Area = 7 * 7 = 49
 *
 * Time Complexity: O(n)
 * Each pointer moves inward at most n - 1 times.
 *
 * Space Complexity: O(1)
 * Only a fixed number of extra variables are used.
 */
