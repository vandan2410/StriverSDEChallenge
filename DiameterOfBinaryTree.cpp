#include<bits/stdc++.h>
using namespace std;



    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };


int diameter(TreeNode<int> *root,int &ans)
{
    if(root==NULL) return 0;
    int left=diameter(root->left,ans);
    int right=diameter(root->right,ans);
    ans=max(ans,left+right);
    return max(left,right)+1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	if(root==NULL) return 0;
    int ans=0;
    diameter(root,ans);
    return ans;
}