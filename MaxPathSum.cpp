#include <bits/stdc++.h> 
using namespace std;

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };


int maxsum(TreeNode<int> *root,long long int &ans)
{
    if(root==NULL) return 0;
    long long int left=max(0,maxsum(root->left,ans));
    long long int right=max(0,maxsum(root->right,ans));
    ans=max(ans,left+right+root->val);
    return max(left,right)+root->val;
}
long long int findMaxSumPath(TreeNode<int> *root)
{
     if(root==NULL || root->left==NULL || root->right==NULL) return -1;
    long long int ans=0;
    maxsum(root,ans);
    return ans;
}