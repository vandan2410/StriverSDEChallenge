#include<bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
	int row = matrix.size();
        int col = matrix[0].size();
        vector <int> dummyRow(row,-1);
        vector<int> dummyCol(col,-1);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    dummyRow[i] = 0;
                    dummyCol[j] = 0;
                }
            }
        }
         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(dummyRow[i] == 0 || dummyCol[j] == 0 ){
                    matrix[i][j]=0;
                }
            }
        }
}
int main()  
{
    vector<vector<int>> matrix;
    setZeros( matrix);
}