#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/pascals-triangle-ii/description/

// My solution with a little help from seeing just Pascal's Triangle I's solutions
// Got stuck a little bit, but at least it beats 100%

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        res.push_back(1);
        
        if(rowIndex == 0) { return res; }

        long long val = 1;
        int j = 1;
        while(j < rowIndex) {
            val *= (rowIndex + 1 - j);
            val /= j;
            res.push_back(val);
            ++j;
        }

        res.push_back(1);
        return res;
    }
};

int main() {
    return 0;
}