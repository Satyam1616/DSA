// //Time Complexity: O(n^2)

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         int count = 0;
        
//         for(int i = 0; i < n; i++) {
//             int sum = 0;
//             for(int j = i; j < n; j++) {
//                 sum += nums[j];
//                 if(sum == k) count++;
//             }
//         }
//         return count;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {1, 1, 1};
//     int k = 2;

//     int result = sol.subarraySum(nums, k);
//     cout << "Number of subarrays: " << result << endl;

//     return 0;
// }


// Optimal Approacg
