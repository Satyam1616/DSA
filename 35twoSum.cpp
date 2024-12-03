#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        unordered_map<int, int> m; // Map to store value to index mapping
        vector<int> ans;

        for (int i = 0; i < arr.size(); i++) {
            int first = arr[i];
            int sec = tar - first;

            // Check if complement exists in the map
            if (m.find(sec) != m.end()) {
                ans.push_back(m[sec]); // Add the index of the complement
                ans.push_back(i);     // Add the current index
                return ans;           // Return as solution is found
            }
            m[first] = i; // Store index of the current element
        }
        return ans; // Return empty if no solution found
    }
};

int main() {
    Solution solution;

    // Example input
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Call the twoSum function
    vector<int> result = solution.twoSum(nums, target);

    // Output the result
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
