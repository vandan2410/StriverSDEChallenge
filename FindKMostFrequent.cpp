#include <bits/stdc++.h> 
bool cmd(pair<int,int> p1 , pair<int,int> p2)
{
    if(p1.second==p2.second)
    {
        return p1.first<p2.first;
    }
    return p1.second>p2.second;
}
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    vector<int> ans;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    vector<pair<int,int>> temp;
    for(auto i:mp)
    {
        pair<int,int> temp1;
        temp1.first=i.first;
        temp1.second=i.second;
        temp.push_back(temp1);
    }
    sort(temp.begin(),temp.end(),cmd);
    
    for(int i=0;i<k;i++)
    {
        ans.push_back(temp[i].first);
    }
    sort(ans.begin(),ans.end());
    return ans;
}