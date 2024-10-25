#include <iostream>
#include <vector>
#include <algorithm> // For std::min and std::max

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0, rp = height.size() - 1;

        while (lp < rp) {
            int ht = min(height[lp], height[rp]);
            int w = rp - lp;
            int currWater = w * ht;

            maxWater = max(maxWater, currWater);
            height[lp] < height[rp] ? lp++ : rp--;
        }

        return maxWater;
    }
};

int main() {
    Solution solution;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7}; // Example input

    int result = solution.maxArea(height);
    cout << "Maximum area of water that can be contained: " << result << endl;

    return 0;
}
