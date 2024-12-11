#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binSearch(vector<int>& arr, int tar, int st, int end) {
        if (st <= end) {
            int mid = st + (end - st) / 2;

            if (arr[mid] == tar) 
                return mid;
            else if (arr[mid] < tar) 
                return binSearch(arr, tar, mid + 1, end);
            else 
                return binSearch(arr, tar, st, mid - 1);
        }

        return -1;
    }

    int search(vector<int>& arr, int tar) {
        return binSearch(arr, tar, 0, arr.size() - 1);
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int target = 5;

    int result = solution.search(nums, target);
    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
