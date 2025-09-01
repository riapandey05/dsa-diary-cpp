class Solution {
public:
    void f(vector<vector<int>>& visited,int i,int j){
        for(int k=0;k<visited.size();k++){
            visited[k][j]=0;
        }
        for(int p=0;p<visited[0].size();p++){
            visited[i][p]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>visited(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    f(visited,i,j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==-1){
                    visited[i][j]=matrix[i][j];
                }
            }
        }
        matrix = visited;
       
    }
};