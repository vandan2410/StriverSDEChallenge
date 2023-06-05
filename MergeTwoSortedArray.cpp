#include <bits/stdc++.h>
using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int i=m-1,j=n-1,check=m+n-1;
    while (i >= 0 && j >= 0) 
	{
        if (arr1[i] > arr2[j])
        {
			arr1[check]=arr1[i];
			i--;
        } 
		else 
		{
          arr1[check] = arr2[j];
          j--;
        }
        check--;
    }
	while(j>=0)
	{
		arr1[check--]=arr2[j--];
	}
	return arr1;
}