#include <bits/stdc++.h> 
using namespace std;
int atoi(string str) {
    int n=str.length()-1;
    
    int count=0;
    int ans=0;
    for(int i=n;i>=0;i--)
    {
        if((int(str[i])>47) && (int(str[i])<58))
        {
            ans+=(int(str[i])-48)*pow(10,count);
            count++;
        }
    }
    if(str[0]=='-')
    {
        ans*=-1;
    }
    return ans;
}