#include <bits/stdc++.h>
using namespace std;
bool findPattern(string p, string s)
{
    int n1=p.length();
    int n2=s.length();
    if(n2<n1) return false;
    else if(n2)
    for(int i=0;i<=n2-n1;i++)
    {
        string temp= s.substr(i,n1);
        if(temp==p) return true;
    }
    return false;
}