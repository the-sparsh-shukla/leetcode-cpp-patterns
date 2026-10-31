// Container With Most Water (LeetCode 11)
// Choose two heights that hold the maximum amount of water.
// Time: O(n) | Space: O(1)

#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = static_cast<int>(height.size()) - 1;
        int best = 0;
        while (left < right) {
            best = max(best, (right - left) * min(height[left], height[right]));
            if (height[left] < height[right]) ++left;
            else --right;
        }
        return best;
    }
};
