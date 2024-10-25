//Peak Index in Mountain Array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st= 1, end = A.size()-2;
        
        while(st<=end){
            int mid = st + (end-st)/2;

            if(A[mid-1] < A[mid] && A[mid] > A[mid +1]){
                return mid;
            } else if(A[mid-1] < A[mid]){//right
                st = mid+1; 
            } else{//left
                end = mid -1;
            }
        }
         return -1; 
    }
};

int main(){
  Solution sol;
  vector<int> A = {0,2,1,0};
  //  {0,10,5,2};

  // {0,1,0};

  int peak = sol.peakIndexInMountainArray(A);
  cout <<"Peak Index in Mountain Array: " <<peak << endl;

  return 0;

}
