class Solution {
public:
    queue<pair<int,int>>q;
    void bfs(vector<vector<char>>& grid,int n,int m){
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(grid[i][j]=='1'){
                grid[i][j]=0;
                if(i>=1) q.push({i-1,j});
                if(j>=1) q.push({i,j-1});
                if(i<n-1) q.push({i+1,j});
                if(j<m-1) q.push({i,j+1});
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    q.push({i,j});
                    c++;
                    bfs(grid,n,m);
                }
            }
        }
        return c;
        
    }
};