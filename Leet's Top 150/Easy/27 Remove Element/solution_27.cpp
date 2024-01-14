#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/remove-element/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
            }
        }
        return nums.size();
    }
};

int main() {
    return 0;
}