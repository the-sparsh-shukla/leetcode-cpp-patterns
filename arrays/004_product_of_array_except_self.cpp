// Product of Array Except Self (LeetCode 238)
// Return products of all values except the value at the current index.
// Division is not allowed. Time: O(n) | Extra space: O(1), excluding output.

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(), 1);
        int prefix = 1;
        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            answer[i] = prefix;
            prefix *= nums[i];
        }
        int suffix = 1;
        for (int i = static_cast<int>(nums.size()) - 1; i >= 0; --i) {
            answer[i] *= suffix;
            suffix *= nums[i];
        }
        return answer;
    }
};
