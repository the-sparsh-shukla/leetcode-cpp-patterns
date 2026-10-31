// Maximum Subarray (LeetCode 53)
// Find the contiguous subarray with the largest sum.
// Time: O(n) | Space: O(1)

#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int endingHere = nums[0];
        int best = nums[0];
        for (int i = 1; i < static_cast<int>(nums.size()); ++i) {
            endingHere = max(nums[i], endingHere + nums[i]);
            best = max(best, endingHere);
        }
        return best;
    }
};
