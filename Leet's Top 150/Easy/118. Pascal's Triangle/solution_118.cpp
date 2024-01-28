#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/pascals-triangle/description/

// My own pure solution without help or reference, beats 28% :( wtf

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        for(int i = 1; i < numRows; ++i) {
            vector<int> currRow;
            
            currRow.push_back(1);
            int j = 1;
            while(j < i) {
                currRow.push_back(res[i-1][j-1] + res[i-1][j]);
                ++j;
            }
            currRow.push_back(1);
            
            res.push_back(currRow);
        }
        return res;
    }
};

/* Why according to GPT:

Using a mathematical formula:
res *= (n - i);
res /= i;

Direct calculation in a loop:
res=res*(R-c);
res=res/(c);

In your implementation, you're using two separate calls to res[i-1][j-1] and res[i-1][j] to access elements 
in the res vector. This involves multiple memory accesses and calculations for each element. 
The other implementations, on the other hand, are using direct mathematical calculations, 
which can be more efficient.

*/

int main() {
    return 0;
}