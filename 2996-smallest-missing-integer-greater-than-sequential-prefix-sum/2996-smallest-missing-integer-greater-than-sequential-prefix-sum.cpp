class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        for(int i=0;i<n-1;i++){
            if(abs(nums[i]-nums[i+1])==1 && nums[i]<nums[i+1]){
               sum+=nums[i+1];
            }
            else break;
        }
        while(1){
            auto it=find(nums.begin(),nums.end(),sum);
            if(it!=nums.end()){
                sum++;
            }
            else return sum;
        }

    }
};