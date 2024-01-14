#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/rotate-array/description/?envType=study-plan-v2&envId=top-interview-150

#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; 

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};


int main() {
    return 0;
}