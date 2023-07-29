#include <bits/stdc++.h> 
using namespace std;


    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};



vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    vector<int> ans;
    queue<pair<TreeNode<int>* , pair<int,int>>> todo;
    map<int,map<int,vector<int>>> mp;
    if(root==NULL) return ans;
    todo.push({root,{0,0}});
    while(todo.empty()==false)
    {
        auto temp=todo.front();
        todo.pop();
        TreeNode<int>* node=temp.first;
        int x=temp.second.first,y=temp.second.second;
        mp[x][y].push_back(node->data);
        if(node->left)
        {
          todo.push({node->left, {x - 1, y + 1}});
        }
        if(node->right)
        {
          todo.push({node->right, {x + 1, y + 1}});
        }
    }
    for(auto i:mp)
    {
        for(auto j:i.second)
        {
            for(auto k:j.second)
            {
                ans.push_back(k);
            }
        }
    }
    return ans;
}