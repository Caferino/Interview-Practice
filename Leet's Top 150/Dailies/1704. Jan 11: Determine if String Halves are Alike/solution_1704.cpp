#include <iostream>
using namespace std;

// Description: https://leetcode.com/problems/determine-if-string-halves-are-alike/description/?envType=daily-question&envId=2024-01-12

// My own pure solution without help or reference. Beats 100% with 0ms!

class Solution {
public:
    bool halvesAreAlike(string s) {
        int half = s.size() / 2 - 1;
        int left = 0, right = s.size() - 1;
        int a = 0, b = 0;
        while(left <= half){
            if(s[left] == 'a' || s[left] == 'e' || s[left] == 'i' || s[left] == 'o' || s[left] == 'u' || s[left] == 'A' || s[left] == 'E' || s[left] == 'I' || s[left] == 'O' || s[left] == 'U') {
                ++a;
            }
            ++left;
        }
        while(right > half){
            if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u' || s[right] == 'A' || s[right] == 'E' || s[right] == 'I' || s[right] == 'O' || s[right] == 'U') {
                ++b;
            }
            --right;
        }
        if(a == b) { return true; }
        return false;
    }
};

int main() {
    return 0;
}