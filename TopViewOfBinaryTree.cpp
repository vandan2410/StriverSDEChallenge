#include <bits/stdc++.h> 
using namespace std;

    

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };



vector<int> getTopView(TreeNode<int> *root) {
    vector<int> ans;
    if(root==NULL) return ans;
    map<int,int> mp;
    queue<pair<TreeNode<int>* , int>> todo;
    todo.push({root,0});
    while(todo.empty()==false)
    {
        auto temp=todo.front();
        todo.pop();
        TreeNode<int>* node=temp.first;
        int x=temp.second;
        if(mp.find(x)==mp.end())
        {
            mp[x]=node->val;
        }
        if(node->left)
        {
            todo.push({node->left,x-1});
        }
        if(node->right)
        {
            todo.push({node->right,x+1});
        }
    }
    for(auto i:mp)
    {
        ans.push_back(i.second);
    }
    return ans;
}