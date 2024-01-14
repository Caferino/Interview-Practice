#include <iostream>
using namespace std;

// Description: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/?envType=study-plan-v2&envId=top-interview-150

// My own pure solution without help or reference.
// First submit returned 8% in time, 99% in memory. 
// Second submit returned 100% in time, 8% in memory.
// Third was low on both.
// Fourth returned 100% in time and 87% in memory, both great,
// but the fluctuation is weird.

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size()) { return -1; }

        int i = 0, j = 0;
        int hs = haystack.size() - 1, ns = needle.size() - 1;
        while(i <= hs) {
            if(haystack[i] == needle[j]) {
                ++j;
                if(j > ns) { return i - ns; }
            }
            else if(j > 0) {
                i -= j;
                j = 0;
            }
            ++i;
        }
        return -1;
        
    }
};

int main() {
    return 0;
}