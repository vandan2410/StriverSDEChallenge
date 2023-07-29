#include <bits/stdc++.h> 
using namespace std;
 
    

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };



vector<int> bottomView(BinaryTreeNode<int> * root){
    queue<pair<BinaryTreeNode<int>*,int>> todo;
    map<int,int> mp;
    vector<int> ans;
    if(root==NULL) return ans;
    todo.push({root,0});
    while(todo.empty()==false)
    {
        auto temp=todo.front();
        todo.pop();
        BinaryTreeNode<int> *node=temp.first;
        int x=temp.second;
        mp[x]=node->data;
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
