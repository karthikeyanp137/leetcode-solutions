class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1,area=0;
        while(l<r){
            int length=min(height[l],height[r]);
            int breadth=r-l;
            area=max(area,length*breadth);
            if(height[l]<height[r]) l++;
            else  r--;
        }
        return area;
        
    }
};