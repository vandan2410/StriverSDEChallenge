#include<bits/stdc++.h>
using namespace std;
void help(int i,int n,int j,int m,int color,int newcolor,vector<vector<int>> &image,vector<vector<bool>> &visited)
{
    if(i<0 || i==n || j<0 || j==m || visited[i][j]==true || image[i][j]!=color) return;
    visited[i][j]=true;
    image[i][j]=newcolor;
    help(i-1,n,j,m,color,newcolor,image,visited);
    help(i+1,n,j,m,color,newcolor,image,visited);
    help(i,n,j-1,m,color,newcolor,image,visited);
    help(i,n,j+1,m,color,newcolor,image,visited);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    int n=image.size();
    int m=image[0].size();
    vector<vector<bool>> visited (n,vector<bool>(m,false));
    int color=image[x][y];
    help(x,n,y,m,color,newColor,image,visited);
    return image;
}