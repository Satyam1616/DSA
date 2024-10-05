
// // Time Complexity O(n)- factorial
// // #include <iostream>
// // using namespace std;
// // int main(){
// //   int n;
// //   int fact = 1;

// //   cout<<"enter a positive number:" <<endl;
// //   cin>> n;

// // for(int i=1; i<=n; i++){
// //   fact *=i;

// // }
// //   cout << fact << endl;
// //   return 0;
// // }


// // O(n) Time complexity - Kadane's algorithm : maximum subarray 
// // #include <iostream>
// // #include <climits>
// // using namespace std;

// // int main()
// // {
// //   int n;
// //   cout << "enter thr number of elements in an array: ";
// //   cin >> n;

// //   int* arr = new int[n];
// //   cout<< "enter the elements of the array:" ;
// //   for(int i = 0; i<n ; i++){
// //     cin>> arr[i];
// //   }

// //   int currSum = 0, ans = INT_MIN;

// //   for (int i = 0; i < n; i++)
// //   {
// //     currSum += arr[i];
// //     ans = max(currSum, ans);
// //     currSum = currSum < 0 ? 0 : currSum;
// //   }

// //   cout << "The maximum subarray is: " << ans << endl;

// //   return 0;
// // }

// O(n) Time complexity - fibonacci series


// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<< "enter a number: " <<endl;
//   cin >> n;

//   int dp[n+1];

//   dp[0] = 0;
//   dp[1] = 1;

//   for(int i=2; i<=n ; i++){
//     dp[i] = dp[i-1] + dp[i-2];
//   }

//   cout <<"the" << n << "th fibonacci is: " << dp[n] <<endl;

//   return 0;
// }


#include<iostream>
using namespace std;

int main(){
  
}