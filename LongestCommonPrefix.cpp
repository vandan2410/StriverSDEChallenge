#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &arr, int n)
{
    
    string temp=arr[0];
    string ans="";
    for(int i=0;i<temp.length();i++)
    {
        for(int j=1;j<arr.size();j++)
        {
            if( i>=arr[j].length() || temp[i]!=arr[j][i] )
            {
                return ans;
            }
        }
        ans+=temp[i];
    }
    return ans;
}


