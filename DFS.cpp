#include<bits/stdc++.h>
using namespace std;
void dfs(int i,vector<bool> &visited,vector<int> adj[],vector<vector<int>> &ans)
{
    stack<int> s;
    s.push(i);
    visited[i]=true;
    vector<int> temp;

    while(s.empty()==false)
    {
        int node=s.top();
        s.pop();
        temp.push_back(node);
        int n=adj[node].size();
        for(int j=0;j<n;j++)
        {
            if(visited[adj[node][j]]==false)
            {
                s.push(adj[node][j]);
                visited[adj[node][j]]=true;
            }
        }
    }
    ans.push_back(temp);
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<vector<int>> ans;
    vector<bool> visited(V,false);
    
    vector<int> adj[V];
    for(int i=0;i<E;i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    
    for(int i=0;i<V;i++)
    {
      if (visited[i] == false) {
        dfs(i, visited, adj, ans);
        
      }
    }
    return ans;
}