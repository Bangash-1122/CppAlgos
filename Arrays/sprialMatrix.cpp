// ****
// Leet Code problem : Spiral Matrix #54  'medium'
// Given an m x n matrix, return all elements of the matrix in spiral order.
// ****


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        // Handle an empty matrix
        if (matrix.empty()) {
            return result;
        }

        // Initialize four boundaries
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        // Continue until all boundaries are crossed
        while (top <= bottom && left <= right) {

            // Step 1: Traverse from LEFT to RIGHT
            // Process the top row
            for (int col = left; col <= right; ++col) {
                result.push_back(matrix[top][col]);
            }
            top++; // Move top boundary downward

            // Step 2: Traverse from TOP to BOTTOM
            // Process the rightmost column
            for (int row = top; row <= bottom; ++row) {
                result.push_back(matrix[row][right]);
            }
            right--; // Move right boundary leftward

            // Step 3: Traverse from RIGHT to LEFT
            // Process the bottom row if it still exists
            if (top <= bottom) {
                for (int col = right; col >= left; --col) {
                    result.push_back(matrix[bottom][col]);
                }
                bottom--; // Move bottom boundary upward
            }

            // Step 4: Traverse from BOTTOM to TOP
            // Process the leftmost column if it still exists
            if (left <= right) {
                for (int row = bottom; row >= top; --row) {
                    result.push_back(matrix[row][left]);
                }
                left++; // Move left boundary rightward
            }
        }

        return result; // Return elements in spiral order
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = solution.spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
};

// Example Input:
// matrix = [
//     [1, 2, 3],
//     [4, 5, 6],
//     [7, 8, 9]
// ]
// Expected Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]

// The four boundaries (top, bottom, left, right) move inward after completing each direction.

// The two if conditions prevent the algorithm from visiting elements twice when only one row or column remains.
// 3. Time Complexity — O(m × n)
// Let:
// - m = number of rows
// - n = number of columns
// Time complexity:
// \[
// \boxed{O(m \times n)}
// \]

// Explanation:
// 1. The algorithm visits each matrix element exactly once.
// 2. Every element is added to the result vector once.
// 3. The four loops collectively process all m × n elements.
// For example, a matrix with 3 rows and 4 columns contains:
// \[
// 3 \times 4 = 12 \text{ elements}
// \]

// The algorithm processes 12 elements.

// Therefore, time complexity is O(m × n).
// 4. Space Complexity — O(m × n)
// Space complexity:
// \[
// \boxed{O(m \times n)}
// \]

// Explanation:
// - The result vector stores all m × n matrix elements.
// - The four boundary variables (top, bottom, left, right) require only constant space.
// - No additional matrix is created.
// Thus:
// Memory usage	Complexity
// Result vector	O(m × n)
// Four boundary variables	O(1)
// Auxiliary space excluding output	O(1)
// Total space including output	O(m × n)

// 5. Final Complexity Summary
// Complexity	Result
// Time	O(m × n)
// Space	O(m × n)
// Auxiliary Space	O(1)
// Approach	Four Boundaries / Simulation
// Traversal	Clockwise Spiral

// Interview explanation:

// "The algorithm uses four boundaries to traverse the matrix clockwise. After each traversal, the corresponding boundary moves inward. Each element is visited exactly once, giving O(m × n) time complexity. The result vector stores all elements, so total space complexity is O(m × n), while auxiliary space is O(1)."
