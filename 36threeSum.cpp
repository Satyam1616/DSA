//Brute force Approach

// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>> ans;

//         set<vector<int>> s; // Corrected the set syntax

//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 for (int k = j + 1; k < n; k++) {
//                     if (nums[i] + nums[j] + nums[k] == 0) {
//                         vector<int> trip = {nums[i], nums[j], nums[k]};
//                         sort(trip.begin(), trip.end()); // Fixed the sort syntax

//                         if (s.find(trip) == s.end()) {
//                             s.insert(trip);
//                             ans.push_back(trip);
//                         }
//                     }
//                 }
//             }
//         }

//         return ans;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {-1, 0, 1, 2, -1, -4};
//     vector<vector<int>> result = sol.threeSum(nums);

//     for (const auto& triplet : result) {
//         for (int num : triplet) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// //By Hashing
// #include <vector>
// #include <set>
// #include <algorithm>
// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
        
//         set<vector<int>> uniqueTriplets; // To store unique triplets

//         for (int i = 0; i < n; i++) {
//             int tar = -nums[i];
//             set<int> seen; // Inner set to track numbers for the current `i`

//             for (int j = i + 1; j < n; j++) {
//                 int third = tar - nums[j];

//                 if (seen.find(third) != seen.end()) {
//                     vector<int> trip = {nums[i], nums[j], third};
//                     sort(trip.begin(), trip.end()); // Ensure triplet is sorted
//                     uniqueTriplets.insert(trip);    // Insert into the set
//                 }

//                 seen.insert(nums[j]);
//             }
//         }

//         // Convert set of unique triplets to a vector of vectors
//         vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
//         return ans;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {-1, 0, 1, 2, -1, -4};
//     vector<vector<int>> result = sol.threeSum(nums);

//     for (const auto& triplet : result) {
//         for (int num : triplet) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


//Two Pointer Approach

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicate values for `i`

            int j = i + 1, k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum < 0) {
                    j++; // Move `j` forward to increase the sum
                } else if (sum > 0) {
                    k--; // Move `k` backward to decrease the sum
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    // Skip duplicate values for `j`
                    while (j < k && nums[j] == nums[j - 1]) j++;
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = sol.threeSum(nums);

    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
