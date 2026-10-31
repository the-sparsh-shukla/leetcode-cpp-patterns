// Valid Palindrome (LeetCode 125)
// Ignore non-alphanumeric characters and compare case-insensitively.
// Time: O(n) | Space: O(1)

#include <cctype>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = static_cast<int>(s.size()) - 1;
        while (left < right) {
            while (left < right && !isalnum(static_cast<unsigned char>(s[left]))) ++left;
            while (left < right && !isalnum(static_cast<unsigned char>(s[right]))) --right;
            if (tolower(static_cast<unsigned char>(s[left])) !=
                tolower(static_cast<unsigned char>(s[right]))) return false;
            ++left;
            --right;
        }
        return true;
    }
};
