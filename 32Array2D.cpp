// // // #include <iostream>
// // // using namespace std;

// // // int main() {
// // //     int matrix[4][3];
// // //     int rows = 4;
// // //     int cols = 3;

// // //     // Input
// // //     for (int i = 0; i < rows; i++) {
// // //         for (int j = 0; j < cols; j++) {
// // //             cin >> matrix[i][j];
// // //         }
// // //     }

// // //     // Output
// // //     for (int i = 0; i < rows; i++) {
// // //         for (int j = 0; j < cols; j++) {
// // //             cout << matrix[i][j] << " ";
// // //         }
// // //         cout << endl;
// // //     }

// // //     // Modifications
// // //     cout << matrix[2][1] << endl; // Output original value of matrix[2][1]
// // //     matrix[2][1] = 18;            // Modify the value of matrix[2][1]
// // //     cout << matrix[2][1] << endl; // Output the updated value of matrix[2][1]

// // //     return 0;
// // // }



// // // Linear Search in 2D array

// // #include <iostream>
// // #include <climits> // For INT_MIN
// // using namespace std;

// // // Function to perform linear search
// // bool linearSearch(int mat[][3], int rows, int cols, int key) {
// //     for (int i = 0; i < rows; i++) {
// //         for (int j = 0; j < cols; j++) {
// //             if (mat[i][j] == key) {
// //                 return true;
// //             }
// //         }
// //     }
// //     return false;
// // }

// // // Function to get the maximum row sum
// // int getMaxSum(int mat[][3], int rows, int cols) {
// //     int maxRowSum = INT_MIN;

// //     for (int i = 0; i < rows; i++) {
// //         int rowSumI = 0;
// //         for (int j = 0; j < cols; j++) {
// //             rowSumI += mat[i][j];
// //         }
// //         maxRowSum = max(maxRowSum, rowSumI); // Use rowSumI instead of undefined variable
// //     }

// //     return maxRowSum; // Return the maximum row sum
// // }

// // int main() {
// //     // Define a 3x3 matrix
// //     int matrix[3][3] = {{1, 2, 30}, {4, 5, 6}, {7, 8, 9}};
// //     int rows = 3; // Corrected to match the actual number of rows
// //     int cols = 3; // Corrected to match the actual number of columns

// //     // Test linearSearch function
// //     cout << (linearSearch(matrix, rows, cols, 8) ? "Found" : "Not Found") << endl;

// //     // Test getMaxSum function
// //     cout << "Maximum Row Sum: " << getMaxSum(matrix, rows, cols) << endl;

// //     return 0;
// // }


// //max xolumn sum

// #include <iostream>
// #include <climits> // For INT_MIN
// using namespace std;

// // Function to perform linear search
// bool linearSearch(int mat[][3], int rows, int cols, int key) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             if (mat[i][j] == key) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// // Function to get the maximum column sum
// int getMaxColSum(int mat[][3], int rows, int cols) {
//     int maxColSum = INT_MIN;

//     for (int j = 0; j < cols; j++) {
//         int colSumJ = 0;
//         for (int i = 0; i < rows; i++) {
//             colSumJ += mat[i][j];
//         }
//         maxColSum = max(maxColSum, colSumJ); // Update the maximum column sum
//     }

//     return maxColSum; // Return the maximum column sum
// }

// int main() {
//     // Define a 3x3 matrix
//     int matrix[3][3] = {{1, 2, 30}, {4, 5, 6}, {7, 8, 9}};
//     int rows = 3; // Corrected to match the actual number of rows
//     int cols = 3; // Corrected to match the actual number of columns

//     // Test linearSearch function
//     cout << (linearSearch(matrix, rows, cols, 20) ? "Found" : "Not Found") << endl;

//     // Test getMaxColSum function
//     cout << "Maximum Column Sum: " << getMaxColSum(matrix, rows, cols) << endl;

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(int mat[][4], int n) {
    int sum = 0;

    // pd: i=j
    // sd: j = n-i-1
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];  // Primary diagonal
        if (i != n - i - 1) {
            sum += mat[i][n - i - 1];  // Secondary diagonal
        }
    }

    return sum;
}

int main() {
    // Fixed-size array for diagonalSum
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = 4;

    cout << "Diagonal Sum (Fixed-Size Array): " << diagonalSum(matrix, n) << endl;

    // Vector for flexible handling
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  // 3x3

    // Output matrix elements
    cout << "Matrix Elements (Vector):" << endl;
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
