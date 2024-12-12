#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Permutations for numbers
    void getPerms(vector<int>& arr, int idx, vector<vector<int>>& ans) {
        if (idx == arr.size()) {
            ans.push_back(arr);
            return;
        }
        for (int i = idx; i < arr.size(); i++) {
            swap(arr[idx], arr[i]);
            getPerms(arr, idx + 1, ans);
            swap(arr[idx], arr[i]); // Backtracking
        }
    }

    vector<vector<int>> permuteNumbers(vector<int>& arr) {
        vector<vector<int>> ans;
        getPerms(arr, 0, ans);
        return ans;
    }

    // Permutations for strings
    void getPerms(vector<string>& arr, int idx, vector<vector<string>>& ans) {
        if (idx == arr.size()) {
            ans.push_back(arr);
            return;
        }
        for (int i = idx; i < arr.size(); i++) {
            swap(arr[idx], arr[i]);
            getPerms(arr, idx + 1, ans);
            swap(arr[idx], arr[i]); // Backtracking
        }
    }

    vector<vector<string>> permuteStrings(vector<string>& arr) {
        vector<vector<string>> ans;
        getPerms(arr, 0, ans);
        return ans;
    }
};

int main() {
    Solution sol;

    // Test with numbers
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> numResult = sol.permuteNumbers(nums);
    cout << "Permutations of numbers:" << endl;
    for (const auto& perm : numResult) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Test with strings
    vector<string> strs = {"apple", "banana", "cherry"};
    vector<vector<string>> strResult = sol.permuteStrings(strs);
    cout << "\nPermutations of strings:" << endl;
    for (const auto& perm : strResult) {
        for (const string& str : perm) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}
