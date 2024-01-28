#include <iostream>
using namespace std;

// Description: https://leetcode.com/problems/fibonacci-number/description/?envType=study-plan-v2&envId=dynamic-programming

// My own pure recursive solution turned to be one of the slowest (beats up to 20%)

class Solution {
public:
    int fib(int n) {
        if(n <= 1) {
            return n;
        }
        return fib(n - 2) + fib(n - 1);
    }
};

// Best way to do it is using a loop that controls space and time more efficently

/* Solution by unknown
class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int a = 0;
        int b =1;
        for(int i =2; i<=n; i++){
            int c= a+b;
            a= b;
            b = c;
        }
        return b;
    }
};
*/

int main() {
    return 0;
}