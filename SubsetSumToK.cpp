#include<bits/stdc++.h>
using namespace std;
void subset(int ind , int n , int k, vector<int> &arr,vector<int> &temp,vector<vector<int>> &ans)
{
    if(ind==n)
    {
        if(k==0)
        {
            ans.push_back(temp);
        }
        return ;
    }
    
        temp.push_back(arr[ind]);
        subset(ind+1,n,k-arr[ind],arr,temp,ans);
        temp.pop_back();

    subset( ind+1,  n,  k, arr, temp, ans);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> &arr, int n, int k)
{
    
    vector<vector<int>> ans;
    vector<int> temp;
    subset(0,n,k,arr,temp,ans);
    sort(ans.begin(),ans.end());
    return ans;
}