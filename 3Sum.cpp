#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	set<vector<int>> temp;
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++)
	{
		int start=i+1,last=n-1;
		while(start<last)
		{
			int sum=arr[i]+arr[start]+arr[last];
			if(sum==K)
			{
				temp.insert({arr[i],arr[start],arr[last]});
				start++;
				last--;
			}
			else if(sum<K)
			{
				start++;
			}
			else
			{
				last--;
			}
		}
	}
	for(auto i:temp)
	{
		ans.push_back(i);
	}
	return ans;
}