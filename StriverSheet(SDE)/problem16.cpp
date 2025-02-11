#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Brute Force Approach - O(n^2)
    vector<int> twoSumBruteForce(vector<int>& arr, int target) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == target) {
                    return {i, j}; // Return indices of the two numbers
                }
            }
        }
        return {}; // No valid pair found
    }

    // Two Pointer Approach - O(n log n) + O(n)
    vector<int> twoSumTwoPointer(vector<int>& arr, int target) {
        int n = arr.size();
        vector<pair<int, int>> nums;
        for (int i = 0; i < n; i++) {
            nums.push_back({arr[i], i}); // Store value and original index
        }
        sort(nums.begin(), nums.end()); // Sort the array
        
        int left = 0, right = n - 1;
        while (left < right) {
            int sum = nums[left].first + nums[right].first;
            if (sum == target) {
                return {nums[left].second, nums[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {}; // No valid pair found
    }

    // Optimized Approach - HashMap - O(n)
    vector<int> twoSumHashMap(vector<int>& arr, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++) {
            int complement = target - arr[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp[arr[i]] = i;
        }
        return {}; // No valid pair found
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    
    cout << "Brute Force: ";
    vector<int> res1 = sol.twoSumBruteForce(arr, target);
    if (!res1.empty()) cout << res1[0] << " " << res1[1] << endl;
    else cout << "No pair found" << endl;
    
    cout << "Two Pointer: ";
    vector<int> res2 = sol.twoSumTwoPointer(arr, target);
    if (!res2.empty()) cout << res2[0] << " " << res2[1] << endl;
    else cout << "No pair found" << endl;
    
    cout << "HashMap: ";
    vector<int> res3 = sol.twoSumHashMap(arr, target);
    if (!res3.empty()) cout << res3[0] << " " << res3[1] << endl;
    else cout << "No pair found" << endl;
    
    return 0;
}
