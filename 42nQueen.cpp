#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isSafe(vector<string> &board, int row, int col, int n) {
        // Horizontal
        for (int j = 0; j < n; j++) {
            if (board[row][j] == 'Q') {
                return false;
            }
        }

        // Vertical
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q') { // Fixed column check
                return false;
            }
        }

        // Left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) { // Fixed loop declaration
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) { // Fixed loop declaration
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans) {
        if (row == n) {
            ans.push_back(board); // Removed unnecessary braces
            return;
        }

        for (int j = 0; j < n; j++) {
            if (isSafe(board, row, j, n)) {
                board[row][j] = 'Q'; // Fixed array indexing
                nQueens(board, row + 1, n, ans);
                board[row][j] = '.'; // Fixed array indexing
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans; // Fixed typo in "vector"

        nQueens(board, 0, n, ans);
        return ans;
    }
};
#include <iostream>
int main() {
    Solution sol;
    int n = 4; // Example: Solve for 4x4 board
    vector<vector<string>> result = sol.solveNQueens(n);

    for (const auto &solution : result) {
        for (const auto &row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
