
#include <iostream>
#include <vector>
#include <climits>
using namespace std;


// //Brute force approach
// int maxProfit(vector<int> &arr) {
//     int maxPro = 0;
//     int n = arr.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] > arr[i]) {
//             maxPro = max(arr[j] - arr[i], maxPro);
//             }
//         }
//         }

//     return maxPro;
// }

// int main() {
//     vector<int> arr = {7,1,5,3,6,4};
//     int maxPro = maxProfit(arr);
//     cout << "Max profit is: " << maxPro << endl;
// }



//Optimised Approach

int maxProfit(vector<int>&arr){
  int maxPro = 0;
  int minPrice = INT_MAX;
  int n = arr.size();

  for(int i = 0; i<n; i++){
    minPrice = min(minPrice, arr[i]);
    maxPro = max(maxPro, arr[i] - minPrice);
  }
  return maxPro;
}

int main(){
  vector<int> arr = {7,1,5,3,6,4};
  int maxPro = maxProfit(arr);
  cout << "Max Profit is:" << maxPro << endl;

}