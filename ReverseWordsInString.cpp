#include<bits/stdc++.h>
using namespace std;
string reverseString(string &str){
	string ans="";
	string temp="";
	vector<string> temp1;
	int n=str.length();
	for(int i=0;i<n;i++)
	{
		if(str[i]==' ')
		{
			if(temp!="")
			{
				temp1.push_back(temp);
				temp="";
			}
		}
		else
		{
			temp+=str[i];
		}
	}
	if(temp!="")
	{
		temp1.push_back(temp);
	}
	reverse(temp1.begin(),temp1.end());
	for(int i=0;i<temp1.size();i++)
	{
		ans+=temp1[i];
		ans+=" ";
	}
	ans.pop_back();
	return ans;
}