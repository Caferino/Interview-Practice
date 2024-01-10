#include<iostream>
#include<vector>
using namespace std;

// Description: https://leetcode.com/problems/majority-element/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int candidate = 0;
        
        for (int num : nums) {
            
            
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
            if (count == 0) {
                count = 1;
                candidate = num;
            }
        }
        
        return candidate;
    }
};

int main() {
    return 0;
}