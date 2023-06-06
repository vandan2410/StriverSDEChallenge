#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	int cnt=1,temp=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>temp)
		{
			arr[cnt++]=arr[i];
			temp=arr[i];
		}
	}
	return cnt;
	
}