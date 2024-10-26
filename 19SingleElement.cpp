#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
        if (n == 1) {
            return A[0];
        }
        
        int st = 0, end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;

            // Check if mid is the first or last element
            if (mid == 0 && A[0] != A[1]) {
                return A[mid];
            }
            if (mid == n - 1 && A[n - 1] != A[n - 2]) {
                return A[mid];
            }

            // Check if mid is the unique element
            if (A[mid - 1] != A[mid] && A[mid] != A[mid + 1]) {
                return A[mid];
            }

            // Adjust search boundaries based on mid's parity
            if (mid % 2 == 0) {
                if (A[mid - 1] == A[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {
                if (A[mid - 1] == A[mid]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1; // Should not reach here if input is valid
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "Single non-duplicate element: " << sol.singleNonDuplicate(arr) << endl;
    return 0;
}
