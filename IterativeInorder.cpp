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

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    stack<TreeNode*> s;
    if(root==NULL) return ans;
    while(true)
    {
        if(root!=NULL)
        {
            s.push(root);
            root=root->left;
        }
        else
        {
            if(s.empty()==false)
            {
                root=s.top();
                s.pop();
                ans.push_back(root->data);
                root=root->right;
            }
            else
            {
                break;
            }
        }

    }
    return ans;
}