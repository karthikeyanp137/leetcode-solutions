class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int oc=image[sr][sc];
        if(oc==color) return image;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(image[i][j]==oc) image[i][j]=color;
            if(i>=1  && image[i-1][j]==oc) {
                image[i-1][j]=color;
                q.push({i-1,j});
            }
            if(j>=1 && image[i][j-1]==oc) {
                image[i][j-1]=color;
                q.push({i,j-1});
            }
            if(i<n-1  &&  image[i+1][j]==oc) {
                image[i+1][j]=color;
                q.push({i+1,j});
            }
            if(j<m && image[i][j+1]==oc) {
                image[i][j+1]=color;
                q.push({i,j+1});
            }
        }
        return image;
        
    }
};