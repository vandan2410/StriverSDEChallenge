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



void Inorder(BinaryTreeNode<int> *root,vector<int> &inorder)
{
    stack<BinaryTreeNode<int> *> s;
    if(root==NULL) return ;
    while(true)
    {
        if(root!=NULL)
        {
            s.push(root);
            root=root->left;
        }
        else
        {
            if(s.empty()==true) break;
            root=s.top();
            inorder.push_back(root->data);
            s.pop();
            root=root->right;
        }
    }
}
void Preorder(BinaryTreeNode<int> *root,vector<int> &preorder)
{
    stack<BinaryTreeNode<int> *> s;
    if(root==NULL) return ;
    s.push(root);
    while(s.empty()==false)
    {
        auto temp=s.top();
        s.pop();
        preorder.push_back(temp->data);
        if(temp->right) s.push(temp->right);
        if(temp->left) s.push(temp->left);
    }
}
void Postorder(BinaryTreeNode<int> *root,vector<int> &postorder)
{
    stack<BinaryTreeNode<int> *> s1,s2;
    if(root==NULL) return ;
    s1.push(root);
    while(s1.empty()==false)
    {
        auto temp=s1.top();
        s1.pop();
        s2.push(temp);
        if(temp->left) s1.push(temp->left);
        if(temp->right) s1.push(temp->right);
    }

    while(s2.empty()==false)
    {
        auto temp=s2.top();
        postorder.push_back(temp->data);
        s2.pop();
    }
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<int> inorder , preorder , postorder ;
    auto temp=root;
    Inorder(temp,inorder);
    temp=root;
    Preorder(temp,preorder);
    temp=root;
    Postorder(temp,postorder);
    vector<vector<int>> ans;
    ans.push_back(inorder);
    ans.push_back(preorder);
    ans.push_back(postorder);
    return ans;
}