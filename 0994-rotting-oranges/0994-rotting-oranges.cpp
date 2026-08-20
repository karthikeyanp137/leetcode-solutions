class Solution {
public:
    queue<pair<int,int>>q;
    int min=0;
    void bfs(vector<vector<int>>& grid,int n,int m){
            while(!q.empty()){
                int f=0;
                int q_size=q.size();
                for(int a=0;a<q_size;a++){
                  int i=q.front().first;
                  int j=q.front().second;
                  q.pop();
                  if(i>=1 && grid[i-1][j]==1){
                      grid[i-1][j]=2;
                      q.push({i-1,j});
                      f=1;
                  } 
                  if(j>=1 && grid[i][j-1]==1){
                       grid[i][j-1]=2;
                       q.push({i,j-1});
                       f=1;
                  }
                  if(i<n-1 && grid[i+1][j]==1){
                     grid[i+1][j]=2;
                     q.push({i+1,j});
                     f=1;
                  }
                  if(j<m-1 && grid[i][j+1]==1){
                    grid[i][j+1]=2;
                    q.push({i,j+1});
                    f=1;
                  }
                }
                if(f==1) min++;
            }

    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        bfs(grid,n,m);
        for(auto row:grid){
            if(find(row.begin(),row.end(),1)!=row.end()){
                return -1;
            }
        }
        return min;
    }
};