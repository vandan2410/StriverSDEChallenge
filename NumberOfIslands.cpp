#include<bits/stdc++.h>
using namespace std;
void help(int i , int n,int j, int m , int ** arr ,vector<vector<bool>> &visited )
{
   if(i<0 || i==n || j<0 || j==m || arr[i][j]==0 || visited[i][j]==true) return;
   visited[i][j]=true;
   help(i+1,n,j,m,arr,visited);
   help(i-1,n,j,m,arr,visited);
   help(i,n,j+1,m,arr,visited);
   help(i,n,j-1,m,arr,visited);
   help(i+1,n,j+1,m,arr,visited);
   help(i+1,n,j-1,m,arr,visited);
   help(i-1,n,j+1,m,arr,visited);
   help(i-1,n,j-1,m,arr,visited);
}
int getTotalIslands(int** arr, int n, int m)
{
   int cnt=0;
   vector<vector<bool>> visited (n, vector<bool> (m,false));
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
         if(arr[i][j]==1 && visited[i][j]==false)
         {
            cnt++;
            help(i,n,j,m,arr,visited);
         }
      }
   }
   return cnt;
}
