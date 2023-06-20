#include <bits/stdc++.h> 
using namespace std;

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    
    vector<int> ans;
    if(root==NULL) return ans;
    q.push(root);
    while(q.empty()==false)
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
              auto temp=q.front();
              q.pop();
              ans.push_back(temp->val);
              if(temp->left)
              {
                  q.push(temp->left);
              }
              if(temp->right)
              {
                  q.push(temp->right) ;
              }
        }
    }
    return ans;
}