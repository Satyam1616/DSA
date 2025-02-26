#include <iostream>
#include <unordered_map>
using namespace std;

int maxLen(int A[], int n) {
    unordered_map<int, int> mpp;
    int maxi = 0;
    int sum = 0; 

    for (int i = 0; i < n; i++) {
        sum += A[i];

        if (sum == 0) {
            maxi = i + 1;
        } else {
            if (mpp.find(sum) != mpp.end()) {
                maxi = max(maxi, i - mpp[sum]);
            } else {
                mpp[sum] = i;
            }
        }
    }
    return maxi;
}

int main() {
    int A[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Length of the longest subarray with sum 0: " << maxLen(A, n) << endl;
    return 0;
}
