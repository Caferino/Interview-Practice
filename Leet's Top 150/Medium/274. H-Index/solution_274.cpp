#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Description: https://leetcode.com/problems/h-index/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n = citations.size(), i;
        for(i = 1; i <= n; ++i)
        {
            cout << i << endl;
            if(citations[n-i] < i) { break; }
        }
        return i - 1;
    }
};

int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n = citations.size(), i;
        for(i = 1; i <= n; ++i)
        {
            if(citations[n-i] < i) break;
        }
        return i - 1;
    }

int main() {
    vector<int> vec = {1, 3, 1, 3, 3, 3, 3, 1};
    int res = hIndex(vec);
    cout << "Res = " << res;
    return 0;
}