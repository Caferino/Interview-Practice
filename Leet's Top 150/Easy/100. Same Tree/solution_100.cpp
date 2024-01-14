#include <iostream>
using namespace std;

// Description: https://leetcode.com/problems/same-tree/description/?envType=study-plan-v2&envId=top-interview-150

// My own pure solution. Got stuck for a while with my return isSameTree... GPT helped turn this:
// return isSameTree(p->left, q->left);
// return isSameTree(p->right, q->right);
// into this:
// return isSameTree(p->left, q->left) && isSameTree(p->right, q->right); that fixed it.
// Beats 100% in time and 70% in memory!

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) { return true; }
        if(p == nullptr || q == nullptr) { return false; }
        if(p->val != q->val) { return false; }
        else {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
    }
};

int main() {
    return 0;
}