// //Brute Force Approach

// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // class Solution {
// // public:
// //     vector<int> productExceptSelf(vector<int>& nums) {
// //         int n = nums.size();
// //         vector<int> ans(n, 1);

// //         // Compute product for each index except self
// //         for (int i = 0; i < n; i++) {
// //             for (int j = 0; j < n; j++) {
// //                 if (i != j) {
// //                     ans[i] *= nums[j];
// //                 }
// //             }
// //         }
// //         return ans;
// //     }
// // };

// // int main() {
// //     Solution sol;
// //     vector<int> nums = {1, 2, 3, 4};
    
// //     vector<int> result = sol.productExceptSelf(nums);
    
// //     // Print the result
// //     for (int i : result) {
// //         cout << i << " ";
// //     }
// //     cout << endl;

// //     return 0;
// // }


// //Optimised time compexity only

// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n, 1);
//         vector<int> prefix(n, 1);
//         vector<int> suffix(n, 1);

//         // prefix
//         for (int i = 1; i < n; i++) {
//             prefix[i] = prefix[i - 1] * nums[i - 1];
//         }

//         // suffix
//         for (int i = n - 2; i >= 0; i--) {
//             suffix[i] = suffix[i + 1] * nums[i + 1];
//         }

//         // final product except self
//         for (int i = 0; i < n; i++) {
//             ans[i] = prefix[i] * suffix[i];
//         }

//         return ans;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {1, 2, 3, 4}; // Test case
//     vector<int> result = sol.productExceptSelf(nums);

//     cout << "Product of array except self: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }




//Optimized time and space complexity
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // Prefix => ans
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        // Suffix
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};

int main() {
    Solution sol;
    
    // Test case
    vector<int> nums = {1, 2, 3, 4};  // You can modify this array for testing
    vector<int> result = sol.productExceptSelf(nums);

    // Print the result
    cout << "Product of array except self: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
