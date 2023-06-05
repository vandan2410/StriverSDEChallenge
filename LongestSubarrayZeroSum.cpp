#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {
  int sum=0,ans=0;
  map<int,int> mp;
  for(int i=0;i<arr.size();i++)
  {
    sum+=arr[i];
    if(sum==0)
    {
      ans=max(ans,i+1);
    }
    if(mp.find(sum)!=mp.end())
    {
      ans=max(ans,i-(mp[sum]));
    }
    else
    {
      mp[sum]=i;
    }
  }
  return ans;

}