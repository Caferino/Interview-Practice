#include <iostream>
#include <stack>
using namespace std;

// Description: https://leetcode.com/problems/valid-parentheses/description/?envType=study-plan-v2&envId=top-interview-150

// My own pure solution without help or references. Only looked up STL's stack methods to remember.
// Beats 100%!

class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 == 1 || s[0] == ')' || s[0] == ']' || s[0] == '}') { return false; }
        stack<char> stack; 
        stack.push('$');
        int n = s.size();
        for(int i = 0; i < n; ++i) {
            if(s[i] == ')') {
                if(stack.top() == '(') { stack.pop(); continue; }
                return false;
            }
            else if(s[i] == ']') {
                if(stack.top() == '[') { stack.pop(); continue; }
                return false;
            }
            else if(s[i] == '}') {
                if(stack.top() == '{') { stack.pop(); continue; }
                return false;
            }
            else {
                stack.push(s[i]);
            }
        }
        return stack.top() == '$';
    }
};

int main() {
    return 0;
}