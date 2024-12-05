// Time Complexity : O(n log n + n^3)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int tar) {
        vector<vector<int>> ans;
        int n = nums.size();

        // Sort the array to make two-pointer technique easier
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            // Skip duplicate elements for the first pointer
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n;) {
                // Use two pointers for the remaining array
                int p = j + 1, q = n - 1;

                while (p < q) {
                    // Calculate the sum as a long long to prevent overflow
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];

                    if (sum < tar) {
                        p++;
                    } else if (sum > tar) {
                        q--;
                    } else {
                        // Found a quadruplet
                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                        p++;
                        q--;

                        // Skip duplicates for the third pointer
                        while (p < q && nums[p] == nums[p - 1]) p++;
                        // Skip duplicates for the fourth pointer
                        while (p < q && nums[q] == nums[q + 1]) q--;
                    }
                }

                j++;
                // Skip duplicates for the second pointer
                while (j < n && nums[j] == nums[j - 1]) j++;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> result = sol.fourSum(nums, target);

    for (auto& quad : result) {
        for (int num : quad) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
