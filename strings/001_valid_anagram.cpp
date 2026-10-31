// Valid Anagram (LeetCode 242)
// Determine whether t is an anagram of s. Inputs contain lowercase English letters.
// Time: O(n) | Space: O(1)

#include <array>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        array<int, 26> count{};
        for (int i = 0; i < static_cast<int>(s.size()); ++i) {
            ++count[s[i] - 'a'];
            --count[t[i] - 'a'];
        }
        for (int value : count) if (value != 0) return false;
        return true;
    }
};
