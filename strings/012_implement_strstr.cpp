// Find the Index of the First Occurrence in a String (LeetCode 28)
// Return the first index where needle occurs in haystack, or -1.
// Uses KMP to avoid rescanning matched characters.
// Time: O(n + m) | Space: O(m)

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        vector<int> prefix(needle.size());
        for (int i = 1, matched = 0; i < static_cast<int>(needle.size()); ++i) {
            while (matched > 0 && needle[i] != needle[matched])
                matched = prefix[matched - 1];
            if (needle[i] == needle[matched]) ++matched;
            prefix[i] = matched;
        }
        for (int i = 0, matched = 0; i < static_cast<int>(haystack.size()); ++i) {
            while (matched > 0 && haystack[i] != needle[matched])
                matched = prefix[matched - 1];
            if (haystack[i] == needle[matched]) ++matched;
            if (matched == static_cast<int>(needle.size()))
                return i - matched + 1;
        }
        return -1;
    }
};
