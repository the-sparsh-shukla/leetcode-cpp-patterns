// Longest Palindromic Substring (LeetCode 5)
// Return the longest contiguous substring that reads the same backwards.
// Time: O(n^2) | Space: O(1), excluding output.

#include <string>
using namespace std;

class Solution {
    string expand(const string& s, int left, int right) {
        while (left >= 0 && right < static_cast<int>(s.size()) && s[left] == s[right]) {
            --left;
            ++right;
        }
        return s.substr(left + 1, right - left - 1);
    }

public:
    string longestPalindrome(string s) {
        string answer;
        for (int i = 0; i < static_cast<int>(s.size()); ++i) {
            string odd = expand(s, i, i);
            string even = expand(s, i, i + 1);
            if (odd.size() > answer.size()) answer = odd;
            if (even.size() > answer.size()) answer = even;
        }
        return answer;
    }
};
