#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/set-mismatch/description/?envType=daily-question&envId=2024-01-22

// My own pure solution, originally beat 30% for using
// unordered_map, but after looking at the top and learning
// how to use a vector instead, got 97%

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> dups(nums.size() + 1);
        for(const auto& num : nums) {
            ++dups[num];
        }

        int size = nums.size();
        int duplicate, missing;
        for(int i = 1; i <= size; ++i) {
            if(dups[i] == 2) { duplicate = i; }
            if(dups[i] == 0) { missing = i; }
        }

        return {duplicate, missing};
    }
};

int main() {
    return 0;
}