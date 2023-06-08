#include <bits/stdc++.h> 
using namespace std;
int find(int i,int j,int m,int n,vector<vector<int>> &dp)
	{
		if(i==m-1 && j==n-1)
		{
			return 1;
		}
		if(dp[i][j]!=-1) return dp[i][j];
		int right=0,down=0;
		if(i!=m-1)
		{
			right+=find(i+1,j,m,n,dp);
		}
		if(j!=n-1)
		{
			down+=find(i,j+1,m,n,dp);
		}
		return dp[i][j]=down+right;
	}
int uniquePaths(int m, int n) {
	vector<vector<int>> dp(m , vector<int> (n,-1));
	int ans=find(0,0,m,n,dp);
	return ans;
}