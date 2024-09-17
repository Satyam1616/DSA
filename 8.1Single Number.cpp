#include <iostream>
using namespace std;
#include <vector>;
class Solution {
public:
    int singleNumber(vector<int> &nums) {
        int ans = 0;  // Initialize ans to 0
        for(int val : nums) {
            ans ^= val;  // XOR operation
        }
        return ans;  // Return the result
    }
};


