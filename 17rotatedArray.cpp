#include <iostream>
#include <vector>
using namespace std;

int rotArray(const vector<int>& arr, int tar) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (arr[mid] == tar) {
            return mid;
        }

        if (arr[st] <= arr[mid]) {
            if (arr[st] <= tar && tar <= arr[mid]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } else {
            if (arr[mid] <= tar && tar <= arr[end]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0; // Change this to test different targets
    int index = rotArray(arr, target);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
