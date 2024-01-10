#include <iostream>
#include <queue>
using namespace std;

// Sources

// Define binary tree
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    
    // Constructor
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    TreeNode* root;
    
    // Constructor, could it be skipped with C++11? "root = nullptr;"
    BinaryTree() : root(nullptr) {}
    
    // Function to insert value into the binary tree
    void insert(int value) {
        root = insertRecursive(root, value);
    }
    
    void printTree(const string& mode) {
        // DFS
        if(mode == "DFS") {
            DepthFS(root);
        }
        else if(mode == "BFS") {
            if(root != nullptr) {
                cout << root->data << " ";
                BreadthFS(root);
            }
            else {
                cout << "No tree";
            }
        }
    }
    
    void DepthFS(TreeNode* node){
        if(node != nullptr) {
            DepthFS(node->left);
            cout << node->data << " ";
            DepthFS(node->right);
            
        }
    }
    
    void BreadthFS(TreeNode* node) {
        if(node != nullptr) {
            if(node->left != nullptr){
                cout << node->left->data << " ";
            }
            if(node->right != nullptr){
                cout << node->right->data << " ";
            }
            BreadthFS(node->left);
            BreadthFS(node->right);
        }
    }
    
private:
    // Recursive funtion to insert a value into the binary tree
    TreeNode* insertRecursive(TreeNode* node, int value) {
        // If empty, create a new node
        if(node == nullptr) {
            return new TreeNode(value);
        }
        
        // Else, run down the tree, auto-sorting
        if(value < node->data) {
            node->left = insertRecursive(node->left, value);
        } else if (value > node->data) {
            node->right = insertRecursive(node->right, value);
        }
        
        // Return unchanged node pointer
        return node;
    }
    
};

int main() {
    BinaryTree tree;
    string DFS = "DFS";
    string BFS = "BFS";
    
    tree.insert(3);
    tree.insert(1);
    tree.insert(5);
    tree.insert(9);
    tree.insert(7);
    tree.insert(2);
    tree.insert(10);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);
    
    tree.printTree(BFS);
    
    return 0;
}