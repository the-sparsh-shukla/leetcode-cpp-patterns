// Subarray Sum Equals K (LeetCode 560)
// Count contiguous subarrays whose sum equals k.
// Time: O(n) average | Space: O(n)

#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCount{{0, 1}};
        int prefix = 0, answer = 0;
        for (int value : nums) {
            prefix += value;
            if (prefixCount.count(prefix - k)) answer += prefixCount[prefix - k];
            ++prefixCount[prefix];
        }
        return answer;
    }
};
