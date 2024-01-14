#include <iostream>
using namespace std;

// Description: https://leetcode.com/problems/integer-to-roman/description/?envType=study-plan-v2&envId=top-interview-150

// Beautiful solution from user: 

class Solution {
public:
    string intToRoman(int num) {
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[]={"","M","MM","MMM"};
        
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
};

/* My first pure attempt
#include <string>

class Solution {
public:
    string intToRoman(int num) {
        if(num > 3999 || num < 1) { return "----"; }
        unordered_map<int, char> m;
            
        // m[0] = "";
        m[1] = 'I';
        m[5] = 'V';
        m[10] = 'X';
        m[50] = 'L';
        m[100] = 'C';
        m[500] = 'D';
        m[1000] = 'M';

        string s = "";
        int divisor = 1000; // Max valid roman num is 3999
        while(divisor > 0){
            if(num / divisor > 0) {
                int curr = num / divisor;
                if(divisor == 1) { curr = num % 10; }
                if(curr < 4) {
                    s += string(curr, m[divisor]);
                }
                else {
                    cout << "curr: " << curr << endl;
                    if(curr == 4) {
                        s += m[divisor] + m[5 * divisor];
                    }
                    else if(curr == 5) {
                        s += m[curr * divisor];
                    }
                    else if(curr >= 6 && curr <= 8) {
                        curr = curr - 5;
                        s += m[5 * divisor];
                        s += std::string(curr, m[divisor]);
                    }
                    else if(curr == 9) {
                        cout << "ALL GOOD" << endl;
                        s += m[divisor] + m[10 * divisor];
                        cout << "ALL GOOD 2" << endl;
                    }
                }
            }
            divisor /= 10;
        }
        cout << s << endl;
        return s;
    }
};
*/

int main() {
    return 0;
}