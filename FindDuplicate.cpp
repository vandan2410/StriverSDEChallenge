#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	map<int,int> mp;
	for(int i=0;i<arr.size();i++)
	{
		mp[arr[i]]++;
	}
	for(auto i:mp)
	{
		if(i.second>1)
		{
			return i.first;
		}
	}
}
