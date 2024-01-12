#include <iostream>
#include <unordered_map>
using namespace std;

// Description: https://leetcode.com/problems/ransom-note/description/?envType=study-plan-v2&envId=top-interview-150

// My own pure solution without help or reference. Beats up to 75%!

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag;
        for(const char& c : magazine) {
            mag[c]++;
        }

        for(const char& c : ransomNote) {
            mag[c]--;
            if(mag[c] < 0) { return false; }
        }
        return true;
    }
};

int main() {
    return 0;
}