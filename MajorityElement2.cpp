#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    int cnt1=0,cnt2=0;
    int cand1=-1,cand2=-1;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==cand1) cnt1++;
        
        else if(arr[i]==cand2) cnt2++;

        else if(cnt1==0)
        {
            cand1=arr[i];
            cnt1=1;
        } 

        else if(cnt2==0)
        {
            cand2=arr[i];
            cnt2=1;
        }

        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0,cnt2=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==cand1)
        {
            cnt1++;
        }
        if(arr[i]==cand2)
        {
            cnt2++;
        }
    }
    int mini=floor(arr.size()/3);
    vector<int> ans;
    if(cnt1>mini) ans.push_back(cand1);
    if(cnt2>mini) ans.push_back(cand2);
    return ans;
}