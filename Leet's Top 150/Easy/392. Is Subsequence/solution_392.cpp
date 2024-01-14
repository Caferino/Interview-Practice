#include <iostream>
using namespace std;

// Description: https://leetcode.com/problems/is-subsequence/description/?envType=study-plan-v2&envId=top-interview-150

// My own pure solution, without help or references.
// Managed to get 100%!

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) { return 1; }
        string result;
        int sInd = s.size() - 1;
        int tInd = t.size() - 1;
        while(tInd >= 0) {
            if(s[sInd] == t[tInd]) {
                result.push_back(s[sInd]);
                --sInd;
                if(result.size() == s.size()) { return 1; }
            }
            --tInd;
        }
        return 0;
    }
};

int main() {
    return 0;
}