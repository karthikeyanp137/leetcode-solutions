class Solution {
public:
    queue<pair<int,int>>q;
    void bfs(vector<vector<int>>& grid,int n,int m){
        while(!q.empty()){
            auto [i,j]=q.front();
            q.pop();
            if(i<n-1 &&  grid[i+1][j]==1){
                grid[i+1][j]=0;
                q.push({i+1,j});
            }
            if(i>=1 &&  grid[i-1][j]==1){
                grid[i-1][j]=0;
                q.push({i-1,j});
            }
            if(j<m-1 &&  grid[i][j+1]==1){
                grid[i][j+1]=0;
                q.push({i,j+1});
            }
            if(j>=1 &&  grid[i][j-1]==1){
                grid[i][j-1]=0;
                q.push({i,j-1});
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]==1){
                grid[i][0]=0;
                q.push({i,0});
            }
            if(grid[i][m-1]==1){
                grid[i][m-1]=0;
                q.push({i,m-1});
            }
        }
        for(int j=0;j<m;j++){
            if(grid[0][j]==1){
                grid[0][j]=0;
                q.push({0,j});
            }
            if(grid[n-1][j]==1){
                grid[n-1][j]=0;
                q.push({n-1,j});
            }
        }
        int ans=0;
        bfs(grid,n,m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};