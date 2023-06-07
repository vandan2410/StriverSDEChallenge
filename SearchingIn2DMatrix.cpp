#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++)
        {
            if(target>=mat[i][0] && target<=mat[i][n-1])
            {
                for(int j=0;j<n;j++)
                {
                    if(mat[i][j]==target)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
}