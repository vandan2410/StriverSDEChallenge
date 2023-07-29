#include<bits/stdc++.h>
using namespace std;
int help(int ind,vector<vector<int>> &dp,vector<int> &values, vector<int> &weights, int n , int w)
{
	if(ind==n)
	{
		return 0;
	}
	if(dp[ind][w]!=-1) return dp[ind][w];
	int take=0,nottake=0;
	nottake=help(ind+1,dp,values,weights,n,w);
	if(w-weights[ind]>=0)
	{
		take=values[ind]+help(ind+1,dp,values,weights,n,w-weights[ind]);
	}
	return dp[ind][w]=max(take,nottake);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	vector<vector<int>> dp(n+1 , vector<int> (w+1,-1));
	return help(0,dp,values,weights,n,w);
}