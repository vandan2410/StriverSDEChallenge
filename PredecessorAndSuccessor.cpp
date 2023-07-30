#include <bits/stdc++.h> 
using namespace std;

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };


pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    pair<int,int> ans;
    int suc=-1,pre=-1;
    BinaryTreeNode<int> * temp=root;
    while(root!=NULL)
    {
        if(root->data<key)
        {
            pre=root->data;
            root=root->right;
        }
        else
        {
            root=root->left;
        }
    }
    while(temp!=NULL)
    {
        if(temp->data>key)
        {
            suc=temp->data;
            temp=temp->left;
        }
        else
        {
            temp=temp->right;
        }
    }
    ans.first=pre;
    ans.second=suc;
    return ans;
}
