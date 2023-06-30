#include <bits/stdc++.h> 
using namespace std;
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
 
    // Create two stacks
    stack<TreeNode *> s1, s2;
 
    // push root to first stack
    s1.push(root);
    TreeNode* node;
 
    // Run while first stack is not empty
    while (!s1.empty()) {
        // Pop an item from s1 and push it to s2
        node = s1.top();
        s1.pop();
        s2.push(node);
 
        // Push left and right children
        // of removed item to s1
        if (node->left)
            s1.push(node->left);
        if (node->right)
            s1.push(node->right);
    }
 
    // Print all elements of second stack
    while (!s2.empty()) {
        node = s2.top();
        s2.pop();
        ans.push_back(node->data);
    }
    return ans;
}