class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        queue<int>q(deque<int>(nums.rbegin(),nums.rend()));
        while(k--){
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        int i=nums.size()-1;
        while(!q.empty()){
            nums[i]=q.front();
            q.pop();
            i--;
        }
    }
};