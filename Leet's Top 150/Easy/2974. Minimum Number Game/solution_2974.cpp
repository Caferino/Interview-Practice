#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Description: https://leetcode.com/problems/minimum-number-game/description/

// My own pure solution without help or reference. Beats 100%, was almost an 1:1 as top #1
// As long as it's not memorization but pattern recognition, I should be good

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> res;
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < size; i += 2) {
            res.push_back(nums[i+1]);
            res.push_back(nums[i]);
        }
        return res;
    }
};

int main() {
    return 0;
}