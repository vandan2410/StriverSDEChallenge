#include <bits/stdc++.h> 
using namespace std;
void bfs(int i , vector<int> adj[] ,vector<bool> &visited,vector<int> &ans)
{
    queue<int> q;
    q.push(i);
    visited[i]=true;
    while(q.empty()==false)
    {
        int node=q.front();
        q.pop();
        ans.push_back(node);
        int n=adj[node].size();
        for(int j=0;j<n;j++)
        {
            if(visited[adj[node][j]]==false)
            {
                q.push(adj[node][j]);
                visited[adj[node][j]]=true;
            }
        }
    }
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    vector<int> adj[vertex];
    
    vector<bool> visited(vertex,false);
    vector<int> ans;
    for(int i=0;i<edges.size();i++)
    {
        adj[edges[i].first].push_back(edges[i].second);
        adj[edges[i].second].push_back(edges[i].first);
    }
    for(int i=0;i<vertex;i++)
    {
        sort(adj[i].begin(),adj[i].end());
    }
    
    for(int i=0;i<vertex;i++)
    {
        if(visited[i]==false)
        {
            bfs(i,adj,visited,ans);
        }
    }
    return ans;
}