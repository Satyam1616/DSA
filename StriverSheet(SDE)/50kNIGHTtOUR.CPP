#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<vector<int>> &grid, int r, int c, int n, int expVal) {
    if (r < 0 || c < 0 || r >= n || c >= n || grid[r][c] != expVal) {
        return false;
    }

    if (expVal == n * n - 1) {
        return true;
    }

    return isValid(grid, r - 2, c + 1, n, expVal + 1) ||
           isValid(grid, r - 1, c + 2, n, expVal + 1) ||
           isValid(grid, r + 1, c + 2, n, expVal + 1) ||
           isValid(grid, r + 2, c + 1, n, expVal + 1) ||
           isValid(grid, r + 2, c - 1, n, expVal + 1) ||
           isValid(grid, r + 1, c - 2, n, expVal + 1) ||
           isValid(grid, r - 1, c - 2, n, expVal + 1) ||
           isValid(grid, r - 2, c - 1, n, expVal + 1);
}

bool checkValidGrid(vector<vector<int>> &grid) {
    return isValid(grid, 0, 0, grid.size(), 0);
}

int main() {
    vector<vector<int>> grid = {
        {0,  11, 16, 5,  20},
        {17, 4,  19, 10, 15},
        {12, 1,  8,  21, 6},
        {3,  18, 23, 14, 9},
        {24, 13, 2,  7,  22}
    };

    if (checkValidGrid(grid)) {
        cout << "Valid Knight's Tour" << endl;
    } else {
        cout << "Invalid Knight's Tour" << endl;
    }

    return 0;
}
