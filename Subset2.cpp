#include <bits/stdc++.h> 
using namespace std;
void subset(int ind, int n,vector<int> &arr,set<vector<int>> &temp1,vector<int> &temp)
{
    if(ind==n)
    {
        temp1.insert(temp);
        return;
    }
    temp.push_back(arr[ind]);
    subset(ind+1,n,arr,temp1,temp);
    temp.pop_back();
    subset(ind+1,n,arr,temp1,temp);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int> temp;
    set<vector<int>> temp1; 
    sort(arr.begin(),arr.end());
    subset(0,n,arr,temp1,temp);
    for(auto i:temp1)
    {
        ans.push_back(i);
    }
    sort(ans.begin(),ans.end());
    return ans;
}