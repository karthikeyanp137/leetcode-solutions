class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=nums.size();
        int flag=0;
        for(int i=0;i<s;i++){
             if(nums[i]==target){
                return i;
             }
             else{
                flag=1;
             }
        }
        if(flag==1){
            return -1;
        }
        return 0;
    }
};