class Solution {
public:
    bool isValid(int i,int j, int n, int m){
        if(i<0|| i>=n|| j<0||j>=m)return false;
        return true;
    }
    int X[4]={-1,1,0,0};
    int Y[4]={0,0,-1,1};
    void dfs(vector<vector<char>>&grid, int i, int j,int n, int m, vector<vector<int>>&visited){
        visited[i][j]=1;
        for(int k=0;k<4;k++){
          int row=i+X[k];
          int col=j+Y[k];
 if(isValid(row, col, n, m)&& grid[row][col]=='1'&&visited[row][col]==0){
            dfs(grid, row, col,n,m, visited);
        }
        }
       
    }
    int numIslands(vector<vector<char>>& grid) {
        int n= grid.size();//row
        int m=grid[0].size();//col
        int result=0;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==0 &&grid[i][j]=='1'){
                    dfs(grid, i, j, n, m,visited);
                    result++;
                }
            }
        }
        return result;
    }
};