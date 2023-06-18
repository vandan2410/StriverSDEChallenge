#include <bits/stdc++.h> 
using namespace std;
string writeAsYouSpeak(int n) 
{
		string ans="1";
		for(int i=1;i<n;i++)
		{
			string temp="";
			int cnt=0;
			char check=ans[0];
			for(int i=0;i<ans.size();i++)
			{
				if(check==ans[i])
				{
					cnt++;
				}
				else
				{
					temp+=to_string(cnt);
					temp+=check;
					check=ans[i];
					cnt=1;
				}
			}
			temp+=to_string(cnt);
			temp+=check;
			ans=temp;
		}
		return ans;
}