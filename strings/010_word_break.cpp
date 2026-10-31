// Word Break (LeetCode 139)
// Determine whether s can be segmented into dictionary words.
// Time: O(n^2 * dictionary lookup) | Space: O(n)

#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> words(wordDict.begin(), wordDict.end());
        vector<bool> possible(s.size() + 1);
        possible[0] = true;
        for (int end = 1; end <= static_cast<int>(s.size()); ++end) {
            for (int start = 0; start < end; ++start) {
                if (possible[start] && words.count(s.substr(start, end - start))) {
                    possible[end] = true;
                    break;
                }
            }
        }
        return possible[s.size()];
    }
};
