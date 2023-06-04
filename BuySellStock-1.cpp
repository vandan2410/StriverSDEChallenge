#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    int profit=0,buy=prices[0];
    for(int i=1;i<prices.size();i++)
    {
        if(prices[i]<buy)
        {
            buy=prices[i];
        }
        else
        {
            profit=max(profit,(prices[i]-buy));
        }
    }
    return profit;
}