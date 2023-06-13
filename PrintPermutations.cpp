#include <bits/stdc++.h> 
using namespace std;
void per(int ind,int n,string &s,vector<string> &ans)
{
    if(ind==n)
    {
        ans.push_back(s);
        return;
    }
    for(int i=ind;i<n;i++)
    {
        swap(s[i],s[ind]);
        per(ind+1,n,s,ans);
        swap(s[i],s[ind]);
    }
}
vector<string> findPermutations(string &s) {
   sort(s.begin(),s.end());
   vector<string> ans;
   int n=s.length();
   per(0,n,s,ans);
   return ans;
}