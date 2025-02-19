// Brute fiorce approach


// #include <iostream>
// #include <vector>
// using namespace std;

// void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
//     for (int j = 0; j < m; j++) {
//         if (matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }
// }

// void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
//     for (int i = 0; i < n; i++) {
//         if (matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }
// }

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {  // Fixed `for*`
//             if (matrix[i][j] == 0) {
//                 markRow(matrix, n, m, i);
//                 markCol(matrix, n, m, j);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {  // Fixed `for(nt j = 0; j < n; j++)`
//             if (matrix[i][j] == -1) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// int main() {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
    
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);  // Fixed `vecor` to `vector`

//     cout << "The final matrix is:\n";
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "\n";  // Fixed `cout << n;`
//     }

//     return 0;
// }




// // Optimized approach

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
//     vector<int> row(n, 0); // row vector
//     vector<int> col(m, 0); // col vector

//     // Traverse the matrix:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 // Mark ith index of row with 1:
//                 row[i] = 1;
//                 // Mark jth index of col with 1:
//                 col[j] = 1;
//             }
//         }
//     }

//     // Finally, mark all (i, j) as 0 if row[i] or col[j] is marked with 1.
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (row[i] || col[j]) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// int main() {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is:\n"; // Fixed newline issue
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "\n"; // Fixed newline issue
//     }

//     return 0;
// }





//Optimised approach

#include <iostream>
#include <vector>
using namespace std;

void zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    int col0 = 1;

    // Step 1: Mark the first row and column
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0; // Mark row
                if (j != 0)
                    matrix[0][j] = 0; // Mark column
                else
                    col0 = 0; // Track if first column should be zeroed
            }
        }
    }

    // Step 2: Mark other cells based on the first row/column
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Step 3: Set first row to zero if needed
    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }

    // Step 4: Set first column to zero if needed
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    
    zeroMatrix(matrix, n, m); // Modified matrix in place

    cout << "The Final matrix is:\n"; // Fixed newline issue
    for (auto it : matrix) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n"; // Fixed newline issue
    }

    return 0;
}


