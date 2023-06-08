#include <bits/stdc++.h>
using namespace std;
string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int start=j+1,end=n-1;
            while(start<end)
            {
                int sum=arr[i]+arr[j]+arr[start]+arr[end];
                if(sum==target)
                {
                    return "Yes";
                }
                else if(sum<target)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
    }
    return "No";
}
