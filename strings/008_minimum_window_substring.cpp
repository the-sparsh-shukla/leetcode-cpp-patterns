// Minimum Window Substring (LeetCode 76)
// Return the smallest substring of s containing every character of t.
// Time: O(|s| + |t|) | Space: O(alphabet)

#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        for (char c : t) ++need[c];
        int missing = static_cast<int>(t.size());
        int left = 0, bestStart = 0, bestLength = s.size() + 1;
        for (int right = 0; right < static_cast<int>(s.size()); ++right) {
            if (need[s[right]] > 0) --missing;
            --need[s[right]];
            while (missing == 0) {
                if (right - left + 1 < bestLength) {
                    bestStart = left;
                    bestLength = right - left + 1;
                }
                ++need[s[left]];
                if (need[s[left]] > 0) ++missing;
                ++left;
            }
        }
        return bestLength == static_cast<int>(s.size()) + 1
            ? "" : s.substr(bestStart, bestLength);
    }
};
