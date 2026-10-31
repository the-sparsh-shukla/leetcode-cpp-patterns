// Binary Search (LeetCode 704)
// Return the index of target in a sorted array, or -1 if it is absent.
// Time: O(log n) | Space: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = static_cast<int>(nums.size()) - 1;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] == target) return middle;
            if (nums[middle] < target) left = middle + 1;
            else right = middle - 1;
        }
        return -1;
    }
};
