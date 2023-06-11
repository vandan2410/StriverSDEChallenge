#include<bits/stdc++.h>
using namespace std;
int calculateMinPatforms(int at[], int dt[], int n) {
    int count=0;
    	sort(at,at+n);
    	sort(dt,dt+n);
    	int j=0;
    	for(int i=0;i<n;i++)
    	{
    	    if(at[i]<=dt[j]) count++;
    	    else j++;
    	}
    	return count;
}