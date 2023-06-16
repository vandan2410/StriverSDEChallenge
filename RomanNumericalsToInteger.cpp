#include <bits/stdc++.h> 
using namespace std;
int romanToInt(string s) {
   map<char , int> mp;
   mp['I']=1;
   mp['V']=5;
   mp['X']=10;
   mp['L']=50;
   mp['C']=100;
   mp['D']=500;
   mp['M']=1000;
   int preuse=0,ans=0;
   for(int i=s.length()-1;i>=0;i--)
   {
       if(preuse<=mp[s[i]])
       {
           ans+=mp[s[i]];
       }
       else
       {
           ans-=mp[s[i]];
       }
       preuse=mp[s[i]];
   }
   return ans;
}
