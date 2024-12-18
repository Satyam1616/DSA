#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    bool isPalin(string s) {
        string s2 = s;
        reverse(s2.begin(), s2.end());
        return s == s2; // Correct palindrome check
    }

    void getAllParts(string s, vector<string> &partitions, vector<vector<string>> &ans) {
        if (s.size() == 0) {
            ans.push_back(partitions); // Add current partition to result
            return;
        }

        for (int i = 0; i < s.size(); i++) {
            string part = s.substr(0, i + 1); // Get the substring

            if (isPalin(part)) {
                partitions.push_back(part); // Add substring to current partition
                getAllParts(s.substr(i + 1), partitions, ans); // Recur for remaining string
                partitions.pop_back(); // Backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partitions;
        getAllParts(s, partitions, ans); // Start the recursive function
        return ans; // Return the result
    }
};

int main() {
    Solution sol;
    string s = "aab";
    vector<vector<string>> result = sol.partition(s);

    for (const auto& partition : result) {
        for (const auto& part : partition) {
            cout << part << " ";
        }
        cout << endl;
    }

    return 0;
}
