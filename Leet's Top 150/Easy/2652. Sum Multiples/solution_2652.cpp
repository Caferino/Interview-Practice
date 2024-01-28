#include <iostream>
using namespace std;

// Description: https://leetcode.com/problems/sum-multiples/description/

// Own pure solution under 5 minutes without help or reference, beats 100%

class Solution {
public:
    int sumOfMultiples(int n) {
        if(n < 3) { return 0; }
        if(n == 3) { return 3; }
        int res = 0;
        while(n > 2) {
            if(n % 7 == 0 || n % 5 == 0 || n % 3 == 0) {
                res += n;
            }
            --n;
        }
        return res;
    }
};

int main() {
    return 0;
}