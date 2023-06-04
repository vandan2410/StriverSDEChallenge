#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &nums, int n)
{
     bool check=false;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                check=true;
            }
        }
        if(check==true)
        {
            int find,temp;
            for(int i=nums.size()-1;i>0;i--)
            {
                if(nums[i-1]<nums[i])
                {
                    find=i-1;
                    temp=i;
                    break;
                }
            }
            for(int i=temp+1;i<nums.size();i++)
            {
                if(nums[i]>nums[find] && nums[i]<nums[temp])
                {
                    temp=i;
                }
            }
            swap(nums[find],nums[temp]);
            sort(nums.begin()+find+1,nums.end());
        }
        else
        {
            sort(nums.begin(),nums.end());
        }
        return nums;
}
