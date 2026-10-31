// Contains Duplicate (LeetCode 217)
// Return true if any value occurs at least twice.
// Time: O(n) average | Space: O(n)

#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int value : nums) {
            if (!seen.insert(value).second) return true;
        }
        return false;
    }
};
