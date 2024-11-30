// #include <iostream>
// using namespace std;

// int main() {
//     int matrix[4][3];
//     int rows = 4;
//     int cols = 3;

//     // Input
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     // Output
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Modifications
//     cout << matrix[2][1] << endl; // Output original value of matrix[2][1]
//     matrix[2][1] = 18;            // Modify the value of matrix[2][1]
//     cout << matrix[2][1] << endl; // Output the updated value of matrix[2][1]

//     return 0;
// }



// Linear Search in 2D array

#include <iostream>
using namespace std;

bool linearSearch(int mat[][3], int rows, int cols, int key){
  for(int i=0; i<rows; i++){
    for(int j = 0; j<cols; j++){
      if(mat[i][j] == key){
        return true;
      }
    }
  }
  return false;

}

int main(){
  int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10, 11, 12}};
  int rows = 4;
  int cols = 3;

  cout << linearSearch(matrix, rows, cols, 20) << endl;
  return 0;
}