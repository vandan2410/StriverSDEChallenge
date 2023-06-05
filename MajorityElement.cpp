#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n) {
	int count=0,ans=arr[0];
	for(int i=1;i<n;i++)
	{
		if(count==0) ans=arr[i];
		if(arr[i]==ans)
		{
			count++;
		}
		else
		{
			count--;
		}
	}
	count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ans)
		{
			count++;
		}
	}
	if(count>(n/2))
	{
		return ans;
	}
	return -1;
}