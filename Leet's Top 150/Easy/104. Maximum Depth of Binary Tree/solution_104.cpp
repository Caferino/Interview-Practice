#include <iostream>
//#include <vector>
using namespace std;

// Description: https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

// My first attempt with 0 help had "return max(maxDepth(root->left), maxDepth(root->right))" inside an else, 
// and an extra return 0; below, which was wrong. After looking at a solution for feeling like an idiot, 
// I was indeed one, I needed it outside the else, no return 0 either, and a +1 to not forget to count 
// the initial root. I was so close, but oh well, 100 % Time and Space

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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) { return 0; }
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

int main() {
    return 0;
}