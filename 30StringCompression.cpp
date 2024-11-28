#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;

        for (int i = 0; i < n; i++) {
            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            if (count == 1) {
                chars[idx++] = ch;
            } else {
                chars[idx++] = ch;
                string str = to_string(count);
                for (char dig : str) {
                    chars[idx++] = dig;
                }
            }

            i--; // Adjust to correctly process the next character
        }

        chars.resize(idx);
        return idx;
    }
};

void printCompressed(vector<char>& chars, int compressedLength) {
    cout << "Compressed string: ";
    for (int i = 0; i < compressedLength; i++) {
        cout << chars[i];
    }
    cout << "\nCompressed length: " << compressedLength << endl;
}

int main() {
    Solution sol;

    // Test case 1
    vector<char> chars1 = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << "Input: ";
    for (char c : chars1) cout << c;
    cout << endl;
    int len1 = sol.compress(chars1);
    printCompressed(chars1, len1);
    cout << endl;

    // Test case 2
    vector<char> chars2 = {'a', 'a', 'b', 'b', 'c'};
    cout << "Input: ";
    for (char c : chars2) cout << c;
    cout << endl;
    int len2 = sol.compress(chars2);
    printCompressed(chars2, len2);
    cout << endl;

    // Test case 3
    vector<char> chars3 = {'a', 'b', 'b', 'c'};
    cout << "Input: ";
    for (char c : chars3) cout << c;
    cout << endl;
    int len3 = sol.compress(chars3);
    printCompressed(chars3, len3);

    return 0;
}
