// // // #include <iostream>
// // // #include <vector>
// // // using namespace std;

// // // vector <int> pairSum(vector <int> nums, int target){
// // //   vector <int> ans;
// // //   int n = nums.size();

// // //   for(int i =0; i< n; i++){
// // //     for(int j = i+1; j<n; j++){
// // //       if(nums[i] + nums[j] == target){
// // //         ans.push_back(i);
// // //         ans.push_back(j);
// // //         return ans;
// // //       }
// // //     }
// // //   }

// // // }

// // // int main(){
// // //   vector<int> nums = {2, 7, 11, 15};
// // //   int target = 13;

// // //   vector<int> ans = pairSum(nums, target);
// // //   cout << ans[0] << ", " <<ans[1] << endl;

// // // return 0;
// // // }

// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // vector<int> pairSum(vector<int> nums, int target) {
// //     vector<int> ans;
// //     int n = nums.size();
// //     int i = 0;
// //     int j = n - 1;  // Correct variable declaration

// //     while (i < j) {
// //         int sum = nums[i] + nums[j];
// //         if (sum > target) {
// //             j--;
// //         } else if (sum < target) {
// //             i++;
// //         } else {
// //             ans.push_back(i);
// //             ans.push_back(j);
// //             return ans;
// //         }
// //     }

// //     return ans;  // Return the result
// // }

// // int main() {
// //     vector<int> nums = {2, 7, 11, 15};
// //     int target = 13;

// //     vector<int> ans = pairSum(nums, target);
// //     if (!ans.empty()) {
// //         cout << ans[0] << ", " << ans[1] << endl;
// //     } else {
// //         cout << "No valid pair found" << endl;
// //     }

// //     return 0;
// // }

// // done using sorting
// #include <iostream>
// #include <vector>
// #include <algorithm> // Needed for std::sort
// using namespace std;

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size(); // Get the size of the array

//         // Edge case: If the array is empty
//         if (n == 0) {
//             return -1; // Or throw an exception or handle the error case as needed
//         }

//         // Sort the array
//         sort(nums.begin(), nums.end());

//         // Initialize frequency counter and answer
//         int freq = 1, ans = nums[0]; // Start with the first element

//         // Loop through the sorted array to count frequencies
//         for (int i = 1; i < n; i++) {
//             if (nums[i] == nums[i - 1]) {  // If the current element is the same as the previous one
//                 freq++;  // Increment frequency
//             } else {
//                 freq = 1;  // Reset frequency to 1 for the new element
//                 ans = nums[i];  // Update the answer to the current element
//             }

//             // Check if this element's frequency is more than n/2
//             if (freq > n / 2) {
//                 return ans;  // Return the majority element
//             }
//         }
//         return ans;  // Return the majority element (after looping through all)
//     }
// };


//Moore's Algorithm
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (freq == 0) {
                ans = nums[i];
            }
            if (ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }

        return ans;
    }
};

