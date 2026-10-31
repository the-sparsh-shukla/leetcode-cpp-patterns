// Longest Consecutive Sequence (LeetCode 128)
// Find the length of the longest run of consecutive integers.
// Time: O(n) average | Space: O(n)

#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> values(nums.begin(), nums.end());
        int best = 0;
        for (int value : values) {
            if (values.count(value - 1)) continue;
            int length = 1;
            while (values.count(value + length)) ++length;
            best = max(best, length);
        }
        return best;
    }
};
