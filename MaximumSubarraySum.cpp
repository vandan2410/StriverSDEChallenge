#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
   long long int maxsum=0;
        long long int currsum=0;
        for(int i=0;i<n;i++)
        {
            currsum=currsum+arr[i];
            if(currsum>maxsum)
            {
                maxsum=currsum;
            }
            if(currsum<0)
            {
                currsum=0;
            }
        }
        return maxsum;
        
}