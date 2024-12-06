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

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        vector<int> prefixSum(n, 0);

        // Calculate prefix sums
        prefixSum[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }

        unordered_map<int, int> m;
        for (int j = 0; j < n; j++) {
            if (prefixSum[j] == k) count++;

            int val = prefixSum[j] - k;
            if (m.find(val) != m.end()) {
                count += m[val];
            }

            if (m.find(prefixSum[j]) == m.end()) {
                m[prefixSum[j]] = 0;
            }

            m[prefixSum[j]]++;
        }

        return count;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 2, 1, 1};
    int k = 5;

    int result = sol.subarraySum(arr, k);
    cout << "Number of subarrays: " << result << endl;

    return 0;
}
