class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans1(n);
        vector<int>ans;
        int p=1,q=1,count=0;
        for(int i=0;i<n;i++){
            p*=nums[i];
            if(nums[i]==0) count++;
        }
        if(count>1) return ans1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                continue;
            }
        q*=nums[i];
        }
        for(int i=0;i<n;i++){
          if(nums[i]==0) ans.push_back(q);
          else ans.push_back(p/nums[i]);
        }
        return ans;
    }
};