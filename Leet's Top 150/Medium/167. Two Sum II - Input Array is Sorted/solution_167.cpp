#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/?envType=study-plan-v2&envId=top-interview-150

// Solution USING help and references, beats 90% / 100%

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int left = 0, right = numbers.size() - 1;
        while(left < right) {
            int sum = numbers[left] + numbers[right];
            if(sum > target) {
                --right;
            }
            else if(sum < target) {
                ++left;
            }
            else {
                return {++left, ++right};
            }
        }
        return {};
    }
};

int main() {
    return 0;
}