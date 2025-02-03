//Kadane's algorithm

//Brute force approach

// #include <iostream>
// #include <climits>
// using namespace std;

// int maxSubarraySum(int arr[], int n) {
//     int maxi = INT_MIN; // maximum sum

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             // subarray = arr[i.....j]
//             int sum = 0;

//             //add all the elements of subarray:
//             for (int k = i; k <= j; k++) {
//                 sum += arr[k];
//             }

//             maxi = max(maxi, sum);
//         }
//     }

//     return maxi;
// }

// int main()
// {
//     int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }


//Better Approach


// #include <iostream>
// #include <climits>
// using namespace std;

// int maxSubarraySum(int arr[], int n){
//   int maxi = INT_MIN;
//   for(int i =0; i<n;i++){
//     int sum = 0;
//     for(int j = i; j<n; j++){
//       sum += arr[j];

//       maxi = max(maxi,sum);
//     }
//   }
//   return maxi;
// }

// int main(){
//   int arr[] = {-2,1,-3,4,-1,2,1,-5, 4};
//   int n = sizeof(arr)/ sizeof(arr[0]);
//   int maxSum = maxSubarraySum(arr,n);
//   cout << "the maximum subarray sum is:" << maxSum << endl;
//   return 0;
// }


//Optimised Approach

#include <iostream>
#include <climits>
using namespace std;

long long maxSubarraySum(int arr[], int n){
  long long maxi = LLONG_MIN;
  long long sum = 0;

  for(int i = 0; i<n ; i++){

    sum+= arr[i];

    if(sum > maxi){
      maxi = sum;
    }

    if(sum < 0){
      sum = 0;
    }

  }

  return maxi;}

  int main(){
    int arr[]= {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr, n);
    cout << "the maximum subarray sum is:" << maxSum << endl;
    return 0;
  }