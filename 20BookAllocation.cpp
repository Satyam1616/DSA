#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
  int students = 1, pages = 0;

  for(int i = 0; i<n; i++){  //O(n)
    if (arr[i] > maxAllowedPages){
      return false;
    } 

    if(pages + arr[i] <=  maxAllowedPages){
      pages += arr[i];
    } else {
      students++;
      pages = arr[i];
    }
  }

  return students > m ?false: true; 

}


int allocateBooks(vector<int> &arr, int n, int m){  //O(log n * n)
  if (m>n){
    return -1;
  }
  int sum = 0;
  for(int i =0; i<n; i++){
    sum += arr[i];
  }

  int st=0, end = sum;
  int ans = -1;

  while (st<=end){  // O(log range)
    int mid = st+ (end - st)/2;

    if(isValid(arr, n, m, mid)){//left
    ans = mid;
    end = mid -1;
    } else{ //right
      st = mid +1;

    }

  
}
 return ans;
}

int main(){

  vector<int> arr =  {15, 17, 20};
  int n = 3, m = 2;

  cout << allocateBooks(arr, n, m) << endl;
  return 0;
}