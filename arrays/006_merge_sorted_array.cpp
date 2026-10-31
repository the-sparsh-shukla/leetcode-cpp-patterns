// Merge Sorted Array (LeetCode 88)
// Merge nums2 into the free space at the end of sorted nums1.
// Time: O(m + n) | Space: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, write = m + n - 1;
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) nums1[write--] = nums1[i--];
            else nums1[write--] = nums2[j--];
        }
    }
};
