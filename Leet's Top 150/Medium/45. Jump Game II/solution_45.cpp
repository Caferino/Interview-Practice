#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/jump-game-ii/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:

    int jump(vector<int>& nums) {

      for(int i = 1; i < nums.size(); i++)
      {
        nums[i] = max(nums[i] + i, nums[i-1]);
      }

      int ind = 0;
      int ans = 0;

      while(ind < nums.size() - 1)
      {
        ans++;
        ind = nums[ind];
      }

      return ans;
    }
};

int main() {
    return 0;
}