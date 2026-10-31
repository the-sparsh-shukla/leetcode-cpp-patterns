// 3Sum (LeetCode 15)
// Return unique triplets whose values add up to zero.
// Time: O(n^2) | Space: O(1), excluding the output.

#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;
        for (int i = 0; i + 2 < static_cast<int>(nums.size()); ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1, right = static_cast<int>(nums.size()) - 1;
            while (left < right) {
                long long sum = static_cast<long long>(nums[i]) + nums[left] + nums[right];
                if (sum < 0) ++left;
                else if (sum > 0) --right;
                else {
                    answer.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    while (left < right && nums[right] == nums[right - 1]) --right;
                    ++left;
                    --right;
                }
            }
        }
        return answer;
    }
};
