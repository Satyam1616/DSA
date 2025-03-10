#include <iostream>
#include <vector>
#include <algorithm>
// using namespace std;
// int findDuplicate(vector<int> &arr){
//   int n = arr.size();
//   sort(arr.begin(), arr.end());

//   for(int i = 0; i<n; i++){
//     if(arr[i] == arr[i+1]){
//       return arr[i];
//     }
//   }
// }

// int main(){
//   vector<int> arr ;
//   arr = {1,3,4,2,2};
//   cout << "The duplicate element is :" << findDuplicate(arr) << endl;

// }

// //time complexity : O(nlogn + N)
// // space complexity : O(1);






//using frequecy methd


using namespace std;
int findDuplicate(vector < int > & arr) {
  int n = arr.size();
  int freq[n + 1] = {
    0
  };
  for (int i = 0; i < n; i++) {
    if (freq[arr[i]] == 0) {
      freq[arr[i]] += 1;
    } else {
      return arr[i];
    }
  }
  return 0;
}
int main() {
  vector < int > arr;
  arr = {1,3,4,2,3};
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}