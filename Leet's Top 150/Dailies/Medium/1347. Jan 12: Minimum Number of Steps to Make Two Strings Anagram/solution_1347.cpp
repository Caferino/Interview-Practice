#include <iostream>
#include <unordered_map>
using namespace std;

// Description: https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/description/?envType=daily-question&envId=2024-01-13

/*
    My own pure solution without help or references.
    Only beats 40% in runtime ;( At least it beats 60% in Memory.
    Yeah, now I will pay attention to Memory too.
*/

class Solution {
public:
    int minSteps(string s, string t) {
        int steps = s.size();
        if(steps == 1) { return true; }
        
        unordered_map<char, int> charFreq;
        
        for(const char& c : s) {
            charFreq[c]++;
        }

        for(const char& c : t) {
            if(charFreq[c] > 0) {
                charFreq[c]--;
                --steps;
            }
        }
        return steps;
    }
};

/* Beautiful solution by unknown:
class Solution {
public:
    int minSteps(string s, string t) {
        int occ[26] = {0};
        for (auto it : s) occ[it-'a'] ++;
        for (auto it : t) occ[it-'a']--;

        int res = 0;
        for (int i = 0; i < 26; i++) res += abs(occ[i]);

        return res / 2;
    }
};

auto init = []() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
*/

// ====================================================

/*
    !IMP
    Learning tricks like b[t[i]-'a']++;, using the alphabet's size and the 
    lambda expression that executes immediately helped a lot. Using the same 
    lambda expression, which as I understand removes or disables critical Input/Output 
    features, including the consolein(cin) and consoleout(cout), makes the program faster.
    It made my code 25-30% faster (beats 70%).
    
    TODO ! I need to dwelve deeper into what tie() and sync_with_stdio() do in detail.

    GPT Explanation:
    In C++, the lambda expression assigned to auto init in this context is known as 
    an immediately invoked lambda expression (IILE). The lambda gets called immediately 
    at the point of its declaration, thanks to the empty parentheses (). The purpose of 
    this pattern is to execute some code (in this case, setting up stream configurations) 
    right when the program starts.
*/

int main() {
    return 0;
}