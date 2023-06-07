#include <bits/stdc++.h> 
using namespace std;
void subsetsum(int ind,int n,int sum,vector<int> &nums,vector<int> &ans)
{
    if(ind==n)
    {
        ans.push_back(sum);
        return;
    }
    subsetsum(ind+1,n,sum+nums[ind],nums,ans);
    subsetsum(ind+1,n,sum,nums,ans);
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    int n=num.size();
    subsetsum(0,n,0,num,ans);
    sort(ans.begin(),ans.end());
    return ans;
}