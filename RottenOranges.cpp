#include<bits/stdc++.h>
using namespace std;
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    vector<vector<bool>> visit(n,vector<bool> (m,false));
    queue<pair<pair<int,int>,int>> todo;
    int cntfresh=0,maxt=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==2)
            {
                todo.push({{i,j},0});
                visit[i][j]=true;
            }
            else if(grid[i][j]==1) cntfresh++;
        }
    }
    if(todo.empty() && cntfresh>0) return -1;
    if(cntfresh==0) return 0;
    int drow[]={1,0,-1,0};
    int dcol[]={0,1,0,-1};
    while(todo.empty()==false)
    {
        int r=todo.front().first.first;
        int c=todo.front().first.second;
        int t=todo.front().second;
        todo.pop();
        maxt=max(maxt,t);
        for(int i=0;i<4;i++)
        {
            int nrow=r+drow[i];
            int ncol=c+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && visit[nrow][ncol]==false)
            {
                todo.push({{nrow,ncol},t+1});
                visit[nrow][ncol]=true;
                cnt++;
            }
        }
    }
    if(cnt!=cntfresh) return -1;
    return maxt;
}