#include <bits/stdc++.h>
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{
   
    int cnt=0;
    int xr=0;
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++)
    {
        xr=xr^arr[i];
        if(xr==x) cnt++;
        int temp=x^xr;
        if(mp.find(temp)!=mp.end())
        {
            cnt+=mp[temp];
            
        }
        mp[xr]++;
    }
    return cnt;
}