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

vector<int> getPreOrderTraversal(TreeNode *root)
{
    stack<TreeNode* > s;
    vector<int> ans;
    if(root==NULL) return ans;
    s.push(root);
    while(s.empty()==false)
    {
        auto temp=s.top();
        s.pop();
        ans.push_back(temp->data);
        if(temp->right) s.push(temp->right);
        if(temp->left) s.push(temp->left);
        
    }
    return ans;
}