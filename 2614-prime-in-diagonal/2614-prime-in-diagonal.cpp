class Solution {
public:
    int pri(int n){
        if(n<=1){
            return 0;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return n;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int>arr;
        int n=nums.size();
        int prime=0;
        for(int i=0;i<n;i++){
                if(nums[i][i]>prime){
                    prime=max(prime,pri(nums[i][i]));
                }
                if(nums[i][n-1-i]>prime){
                    prime=max(prime,pri(nums[i][n-1-i]));
                }
        }
        return prime;
    }
};