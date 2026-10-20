class Solution {
public:
  
    
    void dfs(vector<vector<int>>& isConnected, int city,vector<int>&visited){
        visited[city]=1;
        int n=isConnected.size();
        for(int j=0;j<n;j++){
           

            if(isConnected[city][j]==1 && visited[j]==0){
                dfs(isConnected, j, visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        
        int result=0;
   vector<int>visited(n,0);
        for(int i=0;i<n;i++){
            
                if(visited[i]==0){
                    dfs(isConnected, i,visited);
                    result++;
                
            }
        }
        return result;
    }
};