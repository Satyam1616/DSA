#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int slow = arr[0], fast = arr[0];

        // Phase 1: Detect cycle
        do {
            slow = arr[slow];
            fast = arr[arr[fast]];
        } while (slow != fast);

        // Phase 2: Find the entrance to the cycle
        slow = arr[0];
        while (slow != fast) {
            slow = arr[slow];
            fast = arr[fast];
        }

        return slow; // Duplicate number
    }
};

int main() {
    Solution solution;

    // Example input
    vector<int> nums = {1, 3, 4, 2, 2};

    // Call the function
    int duplicate = solution.findDuplicate(nums);

    // Output the result
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}
