#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    int maxLength=0;
    unordered_set<int> set;
    for(int num:arr)
    {
        set.insert(num);
    }
    for(int num:set)
    {
        if(set.find(num-1)==set.end())
        {
            int currentNum=num;
            int currentLength=1;
            while(set.find(currentNum + 1)!=set.end())
            {
                currentNum++;
                currentLength++;
            }
            maxLength=max(maxLength,currentLength);
        }
    }
    return maxLength;
}