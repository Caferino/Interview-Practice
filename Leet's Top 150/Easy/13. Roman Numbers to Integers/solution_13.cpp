#include <iostream>
using namespace std;

// Description: https://leetcode.com/problems/roman-to-integer/description/?submissionId=1142871400

// My first 100% solution without reference, help or copying! It was really easy, the description kind of
// gave the answer away already, but I felt proud that I first applied previous solution patterns, like
// reading arrays from right to left, before paying too much attention to the conditions the description gives.
// It made the problem easier to chew, a simple sum of positive integers, no negatives.

// Can be enhanced using unordered maps
// #include <unordered_map>
/*
    -- Declare an unordered_map with string keys and int values
    unordered_map<string, int> myMap;

    -- Insert key-value pairs
    myMap["apple"] = 3;
    myMap["banana"] = 5;
    myMap["orange"] = 2;

    Top Solution by Rahul Varma / rahulvarma5297:

    class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> m;
            
            m['I'] = 1;
            m['V'] = 5;
            m['X'] = 10;
            m['L'] = 50;
            m['C'] = 100;
            m['D'] = 500;
            m['M'] = 1000;
            
            int ans = 0;
            
            for(int i = 0; i < s.length(); i++){
                if(m[s[i]] < m[s[i+1]]){
                    ans -= m[s[i]];
                }
                else{
                    ans += m[s[i]];
                }
            }
            return ans;
        }
    };
*/

class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        for(int i = s.length() - 1; i >= 0; --i) {
            if(s[i] == 'I') {
                res += 1;
                continue;
            }
            if(s[i] == 'V') {
                if(i - 1 >= 0 && s[i-1] == 'I') {
                    res += 4;
                    --i;
                }
                else { res += 5; }
                continue;
            }
            if(s[i] == 'X') {
                if(i - 1 >= 0 && s[i-1] == 'I') {
                    res += 9;
                    --i;
                }
                else { res += 10; }
                continue;
            }
            if(s[i] == 'L') {
                if(i - 1 >= 0 && s[i-1] == 'X') {
                    res += 40;
                    --i;
                }
                else { res += 50; }
                continue;
            }
            if(s[i] == 'C') {
                if(i - 1 >= 0 && s[i-1] == 'X') {
                    res += 90;
                    --i;
                }
                else { res += 100; }
                continue;
            }
            if(s[i] == 'D') {
                if(i - 1 >= 0 && s[i-1] == 'C') {
                    res += 400;
                    --i;
                }
                else { res+= 500; }
                continue;
            }
            if(s[i] == 'M') {
                if(i - 1 >= 0 && s[i-1] == 'C') {
                    res += 900;
                    --i;
                }
                else { res += 1000; }
                continue;
            }
        }
        return res;
    }
};

int main() {
    return 0;
}