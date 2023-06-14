#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> pwset(vector<int>v)
{
    int n=pow(2,v.size());
    vector<vector<int>> ans;

    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        int count=0;
        int x=i;
        while(x)
        {
            if((x & 1))
            {
                temp.push_back(v[count]);
            }
            count++;
            x=x>>1;
        }
        ans.push_back(temp);
    }
    return ans;
}