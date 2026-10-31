// Encode and Decode Strings (LeetCode 271)
// Design a reversible encoding for a list of arbitrary strings.
// Length-prefix encoding prevents delimiter collisions.
// Time: O(total characters) | Space: O(total characters)

#include <string>
#include <vector>
using namespace std;

class Codec {
public:
    string encode(vector<string>& strs) {
        string encoded;
        for (const string& word : strs) {
            encoded += to_string(word.size()) + "#" + word;
        }
        return encoded;
    }

    vector<string> decode(string encoded) {
        vector<string> answer;
        int i = 0;
        while (i < static_cast<int>(encoded.size())) {
            int separator = encoded.find('#', i);
            int length = stoi(encoded.substr(i, separator - i));
            i = separator + 1;
            answer.push_back(encoded.substr(i, length));
            i += length;
        }
        return answer;
    }
};
