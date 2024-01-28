#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/two-sum/description/?envType=study-plan-v2&envId=top-interview-150

// My own pure solution, O(n^2), beats 44% :L

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> res(2,0);
        for(int i = 0; i < size; ++i) {
            for(int j = i + 1; j <= size - 1; ++j) {
                if (nums[i] + nums[j] == target) {
                    res[0] = i;
                    res[1] = j;
                    return res;
                }
            }
        }
        return res;
    }
};

/* Cleaner genius solution that beats 100% and it's O(n):
In one search, it saves the index of each number in nums, and if one of them gives us a happy number
when doing target - nums[i] - um[nums[i]], it means it's part of the solution. Cool math tricks I need to learn. 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans ;
        unordered_map<int,int> um ;
        for(int i = 0 ; i < nums.size() ; i++){
            int sum = target - nums[i];
            if(um.count(sum)){
                return {um[sum] , i};
            }
            um[nums[i]] = i;          
        }
        return {} ;
    }
};
*/

int main() {
    return 0;
}