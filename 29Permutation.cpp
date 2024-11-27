#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Function to check if two frequency arrays are the same
    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    // Function to check if s1's permutation is in s2
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        // Frequency array for s1 and sliding window in s2
        int freq[26] = {0}, windowFreq[26] = {0};

        // Initialize frequency array for s1
        for (char c : s1) {
            freq[c - 'a']++;
        }

        // Initialize the first window in s2
        for (int i = 0; i < s1.length(); i++) {
            windowFreq[s2[i] - 'a']++;
        }

        // Check the first window
        if (isFreqSame(freq, windowFreq)) {
            return true;
        }

        // Slide the window across s2
        for (int i = s1.length(); i < s2.length(); i++) {
            // Include the next character in the window
            windowFreq[s2[i] - 'a']++;

            // Exclude the first character of the previous window
            windowFreq[s2[i - s1.length()] - 'a']--;

            // Check if the current window matches
            if (isFreqSame(freq, windowFreq)) {
                return true;
            }
        }

        return false;
    }
};

// Main function to test the code
int main() {
    Solution sol;

    string s1 = "ab";
    string s2 = "eidbaooo";

    if (sol.checkInclusion(s1, s2)) {
        cout << "True: Permutation exists in s2." << endl;
    } else {
        cout << "False: Permutation does not exist in s2." << endl;
    }

    return 0;
}
