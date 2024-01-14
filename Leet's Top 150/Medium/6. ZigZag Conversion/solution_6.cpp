#include <iostream>
#include<vector>
using namespace std;

// Description: https://leetcode.com/problems/zigzag-conversion/description/?envType=study-plan-v2&envId=top-interview-150

// My own pure solution without references or copying.
// Beats only 27% of other users'

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1) { return s; }
        vector<vector<char>> m(numRows);
        int row = 0, strInd = 0;
        bool zig = true;
        while(strInd < s.size()) {
            m.at(row).push_back(s[strInd]);
            if(zig) {
                ++row;
            }
            else if (row > 0) {
                --row;
            }
            
            if(row == numRows) {
                row -= 2;
                if(row > 0) { zig = false; }
            }
            else if (row == 0) {
                zig = true;
            }
            ++strInd;
        }

        row = 0;
        strInd = 0;
        while(row < numRows) {
            for(char c : m.at(row)) {
                s[strInd] = c;
                ++strInd;
            }
            ++row;
        }
        return s;
    }
};

// Here is a beautiful solution I liked for its readibility and size:
/* Author: Unknown
#include <string>
#include <vector>

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1)return s;
        vector<string>v(numRows,"");
        int cur_row=0;
        int direction=-1;
        for(int i=0;i<s.length();i++){
            if(cur_row==numRows-1 || cur_row==0)direction*=-1;
            v[cur_row]+=s[i];
            if(direction==1)cur_row++;
            else cur_row--;
        }
        string res;
        for(auto &it:v) res+=it;
        return res;
    }
};
*/

int main() {
    return 0;
}