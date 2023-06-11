#include <bits/stdc++.h> 
using namespace std;
bool cmd(vector<int> j1 , vector<int> j2)
{
    return j1[1]>j2[1] ;
}
int jobScheduling(vector<vector<int>> &jobs)
{   
    sort(jobs.begin(),jobs.end(),cmd);
    
    int maxDead=-1;
    for(int i=0;i<jobs.size();i++)
    {
        maxDead=max(maxDead,jobs[i][0]);
    }
    vector<int> slot(maxDead+1,-1);
    int jobProfit=0,jobCount=0;
    for(int i=0;i<jobs.size();i++)
    {
        for(int j=jobs[i][0];j>0;j--)
        {
            if(slot[j]==-1)
            {
                jobCount++;
                slot[j]=jobs[i][0];
                jobProfit+=jobs[i][1];
                break;
            }
        }
    }
    return jobProfit;
}
