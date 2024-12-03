#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int n = grid.size();
        int a = 0, b = 0; // Initialize repeated and missing values
        int expSum = 0, actualSum = 0;

        // Traverse the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                actualSum += grid[i][j];

                // Check for the repeated value
                if (s.find(grid[i][j]) != s.end()) {
                    a = grid[i][j];
                    ans.push_back(a); // Store the repeated value
                }

                s.insert(grid[i][j]); // Add value to the set
            }
        }

        // Calculate the expected sum for all numbers from 1 to n^2
        expSum = (n * n) * (n * n + 1) / 2;

        // Find the missing value
        b = expSum - (actualSum - a);
        ans.push_back(b); // Store the missing value

        return ans; // Return the result
    }
};

int main() {
    Solution solution;

    // Example grid input
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 8} // Repeated: 8, Missing: 9
    };

    vector<int> result = solution.findMissingAndRepeatedValues(grid);

    // Output the result
    cout << "Repeated: " << result[0] << ", Missing: " << result[1] << endl;

    return 0;
}
