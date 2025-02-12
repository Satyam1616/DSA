#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> ans;
    
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        for(int j = i+1; j < n; j++){
            if(j > i+1 && nums[j] == nums[j-1]) continue;

            int k = j + 1;
            int l = n - 1;
            while(k < l){
                long long sum = (long long) nums[i] + nums[j] + nums[k] + nums[l];

                if(sum == target) {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++, l--;

                    while(k < l && nums[k] == nums[k-1]) k++;
                    while(k < l && nums[l] == nums[l+1]) l--;
                } 
                else if (sum < target) k++;
                else l--;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {4, 3, 3, 4, 4, 4, 2, 1, 2, 1, 1};
    int target = 10; // Define a valid target value

    vector<vector<int>> ans = fourSum(arr, target);
    cout << "The quadruples are:\n";

    for(auto it : ans) {
        cout << "[";
        for (size_t i = 0; i < it.size(); i++) {
            cout << it[i];
            if (i < it.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}
