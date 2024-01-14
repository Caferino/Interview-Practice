#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/longest-common-prefix/description/?envType=study-plan-v2&envId=top-interview-150

// My own pure solution without help or reference.
// Beats 73% in time and 65% in memory!

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        if(size == 1) { return strs[0]; }
        string longestPrefix = strs[0];
        for(int i = 1; i < size; ++i) {
            int j = 0;
            int lpsize = longestPrefix.length();
            while(j <= lpsize) {
                if(j == lpsize) {
                    longestPrefix.resize(j);
                }
                if(strs[i][j] != longestPrefix[j]) {
                    longestPrefix.resize(j);
                    break;
                }
                ++j;
            }
        }
        return longestPrefix;
    }
};

int main() {
    return 0;
}