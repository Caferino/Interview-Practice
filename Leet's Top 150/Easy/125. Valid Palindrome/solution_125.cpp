#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/valid-palindrome/description/?envType=study-plan-v2&envId=top-interview-150

// My own pure solution without help or reference
// Managed a runtime of 3ms and beats 90%! (Only ran once)

class Solution {
public:
    bool isPalindrome(string s) {
        // cleaning the string
        vector<char> pali;
        int left = 0, right = 0;
        while(left < s.size()) {
            if(s[left] >= 'a' && s[left] <= 'z' || s[left] >= 'A' && s[left] <= 'Z' || s[left] >= '0' && s[left] <= '9'){
                pali.push_back(tolower(s[left]));
            }
            ++left;
        }

        if(pali.size() == 0) { return true; }
        left = 0;
        right = pali.size() - 1;
        while(left < right) {
            if(left == right) { return true; }
            else if(pali[left] == pali[right]) {
                ++left;
                --right;
            }
            else { return false; }
        }
        return true;
    }
};

/* A very beautiful solution by Galactic Falcon - msfxvenom
class Solution {
public:
    bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--;continue;}
           if(tolower(s[start])!=tolower(s[end]))return false;
           else{
               start++;
               end--;
           }
       }
       return true;
}
};
*/

int main() {
    return 0;
}