#include <iostream>
#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/candy/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++)ans[i]=1;
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1])ans[i]=ans[i-1]+1;
        }
        int res=ans[n-1];
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])ans[i]=max(ans[i],ans[i+1]+1);
            res+=ans[i];
        }
        return res;
    }
};

int main() {
    return 0;
}