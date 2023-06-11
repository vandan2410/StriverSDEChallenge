#include <bits/stdc++.h> 
using namespace std;
long getTrappedWater(long *arr, int n){
   vector<long> left;
   vector<long> right;
   long ans=0;
   long minLeft=0,minRight=0;
   for(int i=0;i<n;i++)
   {
       minLeft=max(arr[i],minLeft);
       left.push_back(minLeft);
       minRight=max(minRight,arr[n-i-1]);
       right.push_back(minRight);
   }
   reverse(right.begin(),right.end());
   for(int i=0;i<n;i++)
   {
       long temp=min(left[i],right[i]);
        ans+=(temp-arr[i]);
   }
   return ans;
}