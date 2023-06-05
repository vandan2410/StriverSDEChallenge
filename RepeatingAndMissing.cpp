#include <bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &a, int n)
{
	
	int xr=0;
	for(int i=0;i<n;i++)
	{
		xr = xr ^ a[i];
		xr = xr ^ (i+1);
	}
	int num = (xr & ~(xr-1));

	int zero=0,one=0;
	for(int i=0;i<n;i++)
	{
		if((a[i] & num )!=0)
		{
			one = one ^ a[i];
		}
		else
		{
			zero = zero ^ a[i];
		}
	}
	for(int i = 1 ; i < n + 1 ; i++ )
	{
		if((i & num)!=0 )
		{
			one = one ^ i;
		}
		else
		{
			zero = zero ^ i;
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==zero)
		{
			cnt++;
		}
	}
	if(cnt==0)
	{
		return {zero , one};
	}
	return {one,zero};
}