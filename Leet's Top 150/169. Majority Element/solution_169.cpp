#include<iostream>
#include<vector>
using namespace std;

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