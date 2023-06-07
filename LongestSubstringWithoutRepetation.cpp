#include <bits/stdc++.h> 
using namespace std;
int uniqueSubstrings(string input)
{
    vector<int> temp (256,-1);
    int ans=0,start=0;
    for(int i=0;i<input.size();i++)
    {
        start=max(start,temp[input[i]]+1);
        temp[input[i]]=i;
        ans=max(ans,i-start+1);
    }
    return ans;
}