#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int min = prices[0];
        int profit = 0;

        for (int i = 1; i < size; ++i) {
            min = std::min(min, prices[i]);
            profit = std::max(profit, prices[i] - min);
        }
        return profit;
    }
};

int main() {
    return 0;
}