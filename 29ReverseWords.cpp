#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";

        // Reverse the entire string
        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            string word = "";

            // Collect a word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse the word and add it to the result
            reverse(word.begin(), word.end());
            if (!word.empty()) {
                if (!ans.empty()) {
                    ans += " ";
                }
                ans += word;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Test case 1
    string input1 = "the sky is blue";
    string result1 = sol.reverseWords(input1);
    cout << "Input: \"" << input1 << "\"\n";
    cout << "Output: \"" << result1 << "\"\n\n";

    // Test case 2
    string input2 = "hello world";
    string result2 = sol.reverseWords(input2);
    cout << "Input: \"" << input2 << "\"\n";
    cout << "Output: \"" << result2 << "\"\n\n";

    return 0;
}
