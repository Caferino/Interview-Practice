#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/jump-game/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxReach = 0;
        for (int i = 0; i < n; i++) {
            if (i > maxReach) return false;
            maxReach = max(maxReach, i + nums[i]);
        }
        return true;
    }
};

int main() {
    return 0;
}