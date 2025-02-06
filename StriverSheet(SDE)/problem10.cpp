#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& arr) {
        long long n = arr.size();
        long long SN = (n * n * (n * n + 1)) / 2; 
        long long S2N = (n * n * (n * n + 1) * (2 * n * n + 1)) / 6; 
        long long S1 = 0, S2 = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                S1 += arr[i][j]; // Sum of elements
                S2 += (long long)arr[i][j] * arr[i][j]; // Sum of squares
            }
        }

        long long val1 = S1 - SN; // Difference between actual sum and expected sum
        long long val2 = S2 - S2N; // Difference between actual square sum and expected square sum

        val2 = val2 / val1;
        long long x = (val1 + val2) / 2;
        long long y = x - val1;

        return { (int)x, (int)y }; // Return vector with repeated and missing number
    }
};

int main() {
    Solution sol;

    // Example test case
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 6, 6},
        {7, 8, 9}
    };

    vector<int> result = sol.findMissingAndRepeatedValues(arr);

    cout << "Repeated Number: " << result[0] << endl;
    cout << "Missing Number: " << result[1] << endl;

    return 0;
}
