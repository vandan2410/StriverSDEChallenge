#include <bits/stdc++.h> 
using namespace std;
bool cmd(pair<int,int> p1 , pair<int,int>p2)
{
    return ((double)p1.second/p1.first)>((double)p2.second/p2.first);
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    double ans=0;
    sort(items.begin(),items.end(),cmd);
    int currwt=0;
    for(auto p:items)
    {
        if(p.first + currwt <= w)
        {
            currwt+=p.first;
            ans+=p.second;
        }
        else
        {
            ans+=double((double)p.second*(w-currwt))/p.first;
            break;
        }
    }
    return ans;
}