// Longest Substring Without Repeating Characters (LeetCode 3)
// Find the longest substring with no repeated characters.
// Time: O(n) | Space: O(min(n, alphabet))

#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int left = 0, best = 0;
        for (int right = 0; right < static_cast<int>(s.size()); ++right) {
            if (lastSeen.count(s[right])) left = max(left, lastSeen[s[right]] + 1);
            lastSeen[s[right]] = right;
            best = max(best, right - left + 1);
        }
        return best;
    }
};
