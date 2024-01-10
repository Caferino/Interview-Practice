#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    TreeNode* root;
    
    BinaryTree() : root(nullptr) {}
    BinaryTree(int value) : root(new TreeNode(value)) {}
    
    void insert(int value){
        root = insertRecursive(root, value);
    }

    void printTree(const string& mode){
        if(mode == "DFS"){
            DepthFirstSearch(root);
        }
        else if(mode == "BFS"){
            cout << root->data << " ";
            BreadthFirstSearch(root);
        }
    }
    
private:
    TreeNode* insertRecursive(TreeNode* node, int value) {
        if(node == nullptr){
            return new TreeNode(value);
        }

        if(value < node->data){
            node->left = insertRecursive(node->left, value);
        } else if(value > node->data){
            node->right = insertRecursive(node->right, value);
        }

        return node;
    }

    // Searches
    void DepthFirstSearch(TreeNode* node) {
        if(node != nullptr) {
            DepthFirstSearch(node->left);
            cout << node->data << " ";
            DepthFirstSearch(node->right);
        }
    }

    void BreadthFirstSearch(TreeNode* node) {
        if(node != nullptr) {
            if(node->left != nullptr) { cout << node->left->data << " "; }
            if(node->right != nullptr) { cout << node->right->data << " "; }
            BreadthFirstSearch(node->left);
            BreadthFirstSearch(node->right);
        }
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

    cout << "DFS: ";
    tree.printTree(DFS);
    cout << endl;
    cout << "BFS: ";
    tree.printTree(BFS);
    cout << endl;
    
    return 0;
}