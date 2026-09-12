class Solution {
public:
    int pri(int n){
        if(n<=1){
            return 0;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
                break;
            }
        }
        return n;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int>arr;
        int n=nums.size();
        int prime=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    prime=max(prime,pri(nums[i][j]));
                }
                if(i+j==n-1){
                    prime=max(prime,pri(nums[i][j]));
                }
            }

        }
        return prime;
    }
};