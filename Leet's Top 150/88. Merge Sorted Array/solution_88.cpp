#include<iostream>
#include<vector>
using namespace std;

// Description: https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k= m+n-1;
        int i=m-1, j=n-1;
        while (i>=0 && j>=0){
            if (nums1[i]>nums2[j]){
                nums1[k]= nums1[i];
                i--;
            }
            else{
                nums1[k]= nums2[j];
                j--;
            }
            k--;
        }
        while (j>=0){
            nums1[k--]= nums2[j--];
        }
    }
};

int main() {
    return 0;
}