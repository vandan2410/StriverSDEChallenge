#include <bits/stdc++.h> 
using namespace std;
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
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


void temp(TreeNode<int>* root,vector<int>& ans,int x)
{
	if(root==NULL ) return;
	if(root->data==x)
	{
		ans.push_back(x);
		return;
	}
	ans.push_back(root->data);
	temp(root->left,ans,x);
	temp(root->right,ans,x);
	if(ans[ans.size()-1]!=x) ans.pop_back();
	return;
	
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    vector<int> ans;
	if(root==NULL) return ans;
	temp(root,ans,x);
	return ans;
}
