#include <bits/stdc++.h> 
using namespace std;
int distinctSubstring(string &word) {
   set<string> temp;
   for(int i=0;i<word.size();i++)
   {
       string check="";
       for(int j=i;j<word.size();j++)
       {
           check+=word[j];
           temp.insert(check);
       }
       
   }
   return temp.size();
}
