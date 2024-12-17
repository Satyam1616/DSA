#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    set<vector<int>> s;

    void getAllCombinations(vector<int>& arr, int idx, int tar, vector<vector<int>>& ans, vector<int>& combin) {
        if (idx == arr.size() || tar < 0) {
            return;
        }
        if (tar == 0) {
            if (s.find(combin) == s.end()) { // Only insert unique combinations
                ans.push_back(combin);
                s.insert(combin);
            }
            return;
        }

        combin.push_back(arr[idx]);
        // single
        if (idx + 1 < arr.size() && tar >= arr[idx]) // Avoid unnecessary recursion
            getAllCombinations(arr, idx + 1, tar - arr[idx], ans, combin);

        // multiple
        if (tar >= arr[idx]) // Avoid unnecessary recursion
            getAllCombinations(arr, idx, tar - arr[idx], ans, combin);

        // exclusion
        getAllCombinations(arr, idx + 1, tar, ans, combin);

        combin.pop_back(); // Backtrack
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combin;

        sort(arr.begin(), arr.end()); // Sort the input array
        getAllCombinations(arr, 0, target, ans, combin);

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 3, 6, 7}; // Example input
    int target = 7;

    vector<vector<int>> result = sol.combinationSum(arr, target);

    // Print the result
    for (const auto& comb : result) {
        for (int num : comb) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
