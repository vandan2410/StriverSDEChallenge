#include <bits/stdc++.h> 
using namespace std;
int merge(int start,int mid , int end,long long * arr)
{
    int l1=mid-start+1;
    int l2=end-mid;
    long long int first[l1];
    long long int second[l2];
    long long int k=start;
    long long int cnt=0;
    for(int i=0;i<l1;i++)
    {
        first[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<l2;i++)
    {
        second[i]=arr[k++];
    }
    k=start;
        long long int i=0,j=0;
        while(i<l1 && j<l2)
        {
            if(first[i]<=second[j])
            {
                arr[k]=first[i];
                i++;
            }
            else
            {
                arr[k]=second[j];
                cnt=cnt+(l1-i);
                j++;
            }
            k++;
        }
        while(i<l1)
        {
            arr[k++]=first[i++];
        }
        while(j<l2)
        {
            arr[k++]=second[j++];
        }
        return cnt;
}

int mergesort(int start,int end,long long *arr)
{
    long long int count=0;
    if(start<end)
    {
        int mid=(start+end)/2;
        count+=mergesort(start,mid,arr);
        count+=mergesort(mid+1,end,arr);
        count+=merge(start,mid,end,arr);
    }
    return count;
}

long long getInversions(long long *arr, int n){
    long long int count=mergesort(0,n-1,arr);
    return count;
}