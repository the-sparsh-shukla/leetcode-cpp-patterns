// Two Sum (LeetCode 1)
// Given an array and a target, return indices of two values whose sum is target.
// Time: O(n) | Space: O(n)

#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexOf;
        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            int needed = target - nums[i];
            if (indexOf.count(needed)) return {indexOf[needed], i};
            indexOf[nums[i]] = i;
        }
        return {};
    }
};
