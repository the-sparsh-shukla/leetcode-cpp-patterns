// Valid Parentheses (LeetCode 20)
// Check whether every opening bracket is closed in the correct order.
// Time: O(n) | Space: O(n)

#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') open.push(c);
            else {
                if (open.empty()) return false;
                char expected = c == ')' ? '(' : (c == ']' ? '[' : '{');
                if (open.top() != expected) return false;
                open.pop();
            }
        }
        return open.empty();
    }
};
