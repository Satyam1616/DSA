#include <iostream>
#include <vector>
using namespace std;

bool SearchMatrix(vector<vector<int>> &matrix, int target){
  int n = matrix.size();
  if(n==0) return false;
  int m = matrix[0].size();

  int st = 0, end = n*m-1;

  while(st <=end){
    int mid = st + (end - st)/2;
    int row = mid/m, col = mid%m;

    if(matrix[row][col] == target){
      return true;
    }
    else if(matrix[row][col] < target){
      st = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return false;
    }

    int main(){
      vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
      SearchMatrix(matrix, 8) == true ? cout << "true" : cout << "false";
    }