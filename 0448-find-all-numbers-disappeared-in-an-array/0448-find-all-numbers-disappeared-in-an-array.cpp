class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        for(auto x: nums){
            int n= abs(x)-1;

            if(nums[n]<0) continue;
            else nums[n]=-nums[n];
        }
    
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) ans.push_back(i+1);
        }

        return ans;
    }
};