// Best Time to Buy and Sell Stock (LeetCode 121)
// Find the maximum profit from one buy followed by one later sell.
// Time: O(n) | Space: O(1)

#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = prices[0];
        int best = 0;
        for (int price : prices) {
            lowest = min(lowest, price);
            best = max(best, price - lowest);
        }
        return best;
    }
};
