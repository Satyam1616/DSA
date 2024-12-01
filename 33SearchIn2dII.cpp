#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size(), n = mat[0].size();

        int r = 0, c = n - 1;
        while (r < m && c >= 0) {
            if (target == mat[r][c]) {
                return true;
            } else if (target < mat[r][c]) {
                c--;
            } else {
                r++;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;

    // Example matrix
    vector<vector<int>> mat = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    // Test cases
    int target1 = 5;
    int target2 = 20;

    cout << "Searching for " << target1 << ": " 
         << (solution.searchMatrix(mat, target1) ? "Found" : "Not Found") << endl;

    cout << "Searching for " << target2 << ": " 
         << (solution.searchMatrix(mat, target2) ? "Found" : "Not Found") << endl;

    return 0;
}
