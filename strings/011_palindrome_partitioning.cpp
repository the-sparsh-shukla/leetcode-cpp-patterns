// Palindrome Partitioning (LeetCode 131)
// Return every partition where each piece is a palindrome.
// Time: O(n * 2^n) | Space: O(n) recursion, excluding output.

#include <string>
#include <vector>
using namespace std;

class Solution {
    void backtrack(const string& s, int start, vector<string>& current,
                   vector<vector<string>>& answer) {
        if (start == static_cast<int>(s.size())) {
            answer.push_back(current);
            return;
        }
        for (int end = start; end < static_cast<int>(s.size()); ++end) {
            if (s[start] != s[end]) continue;
            bool palindrome = true;
            for (int left = start, right = end; left < right; ++left, --right) {
                if (s[left] != s[right]) {
                    palindrome = false;
                    break;
                }
            }
            if (!palindrome) continue;
            current.push_back(s.substr(start, end - start + 1));
            backtrack(s, end + 1, current, answer);
            current.pop_back();
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> answer;
        vector<string> current;
        backtrack(s, 0, current, answer);
        return answer;
    }
};
