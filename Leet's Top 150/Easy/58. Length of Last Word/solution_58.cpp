#include <iostream>
using namespace std;

// Description: https://leetcode.com/problems/length-of-last-word/description/?envType=study-plan-v2&envId=top-interview-150

// My own pure solution without help or reference.
// Beats 100% in time and 93% in memory!

class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        if (size == 1) { return 1; }
        int wordSize = 0;
        bool foundWord = false;
        for(int right = size - 1; right >= 0; --right) {
            if(s[right] != ' ') {
                wordSize++;
                foundWord = 1;
            }
            else if(foundWord) {
                return wordSize;
            }
        }
        return wordSize;
    }
};

/* Very beautiful solution by unknown:
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        while(i>=0 && s[i] == ' ') i--;
        int end = i;
        while(i>=0 && s[i] != ' ') i--;
        return end-i;
    }
};
*/

int main() {
    return 0;
}