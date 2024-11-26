// using function for checking alphanumeric

// #include <iostream>
// #include <cctype> // For isalnum

// bool isAlphaNum(char ch) {
//     return std::isalnum(ch);
// }

// int main() {
//     char ch = 'A';
//     if (isAlphaNum(ch)) {
//         std::cout << ch << " is alphanumeric.\n";
//     } else {
//         std::cout << ch << " is not alphanumeric.\n";
//     }

//     ch = '@';
//     if (isAlphaNum(ch)) {
//         std::cout << ch << " is alphanumeric.\n";
//     } else {
//         std::cout << ch << " is not alphanumeric.\n";
//     }

//     return 0;
// }


#include <iostream>
#include <string>
#include <cctype> // For tolower function

using namespace std;

class Solution {
public:

    bool isAlphaNum(char ch) {
        // Check if the character is a digit or a letter
        if ((ch >= '0' && ch <= '9') || 
            (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;

        while (st < end) {
            if (!isAlphaNum(s[st])) { // Skip non-alphanumeric characters
                st++;
                continue;
            }
            if (!isAlphaNum(s[end])) { // Skip non-alphanumeric characters
                end--;
                continue;
            }
            if (tolower(s[st]) != tolower(s[end])) { // Compare characters
                return false;
            }
            st++;
            end--;
        }
        return true; // If all checks passed
    }
};

int main() {
    Solution solution;
    string input;

    cout << "Enter a string to check if it is a palindrome: ";
    getline(cin, input); // Read input with spaces

    if (solution.isPalindrome(input)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }

    return 0;
}
