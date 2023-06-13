#include <bits/stdc++.h> 
using namespace std;
int findMinimumCoins(int amount) 
{
    int arr[9] = {1,2,5,10,20,50,100,500,1000};
    int cnt=0;
    for(int i=8;i>=0;i--)
    {
        cnt+=(amount/arr[i]);
        amount=(amount%arr[i]);
    }
    return cnt;
}
