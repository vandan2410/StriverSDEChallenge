#include<bits/stdc++.h>
using namespace std;
vector<int> stringMatch(string &str, string &pat) {
    vector<int> ans;
    int n=str.length(),m=pat.length();
    int i=0;
    while(i<=n-m)
    {
        string temp=str.substr(i,m);
        if(temp==pat)
        {
            ans.push_back(i+1);
            
        } 
        
        
          i++;
        
    }
    return ans;
}
