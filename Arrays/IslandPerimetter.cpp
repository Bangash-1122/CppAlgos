// ***
// Leetcode Problem: 463. Island Perimeter 'easy'
//  You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water.
//  Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).
//  The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.
// Example: inputs: [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
// Output: 16
// **** 

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        int perimeter = 0;

        // Get the number of rows and columns.
        int rows = grid.size();
        int cols = grid[0].size();

        // Traverse each cell of the grid.
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {

                // Check if the current cell is land.
                if (grid[i][j] == 1) {

                    // Count each side touching water or the boundary.
                    if (i == 0 || grid[i - 1][j] == 0)
                        perimeter++; // Top

                    if (i == rows - 1 || grid[i + 1][j] == 0)
                        perimeter++; // Bottom

                    if (j == 0 || grid[i][j - 1] == 0)
                        perimeter++; // Left

                    if (j == cols - 1 || grid[i][j + 1] == 0)
                        perimeter++; // Right
                }
            }
        }

        // Return the total perimeter.
        return perimeter;
    }
};

int main() {
    Solution solution;

    // Initialize the island grid.
    vector<vector<int>> grid = {
        {0, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 1, 0, 0},
        {1, 1, 0, 0}
    };

    // Calculate and print the perimeter.
    int result = solution.islandPerimeter(grid);

    cout << "Output: " << result << endl;

    return 0;
}
//  OutPut : 16  <= 3+3+3+2+3+2

// Simple Explanation
// - 1 represents land.
// - 0 represents water.
// - Each land cell has four sides.
// - A side contributes 1 to the perimeter if it touches water or lies on the grid boundary.
// - Sides shared by two land cells are not counted.
// Complexity Analysis
// - Time Complexity: O(rows × cols) — Every cell is visited once.
// - Space Complexity: O(1) — Only a few variables are used.
// Final Verdict:  Correct Solution


// Your code is efficient, easy to understand, and meets the requirements of LeetCode Problem 463.
