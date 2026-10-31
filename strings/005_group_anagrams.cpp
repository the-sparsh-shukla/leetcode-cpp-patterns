// Group Anagrams (LeetCode 49)
// Group words that contain the same characters.
// Time: O(n * k log k) | Space: O(n * k)

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (string word : strs) {
            string key = word;
            sort(key.begin(), key.end());
            groups[key].push_back(move(word));
        }
        vector<vector<string>> answer;
        for (auto& group : groups) answer.push_back(move(group.second));
        return answer;
    }
};
