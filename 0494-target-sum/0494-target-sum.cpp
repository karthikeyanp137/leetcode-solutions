class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
         int n = nums.size();
        int sum=0;
        for(int x:nums) sum+=x;
        if(abs(target)>sum || (sum+target)%2) return 0;
        int s=(sum+target)/2;
        vector<vector<unsigned long long>> dp(n + 1, vector<unsigned long long>(s + 1, 0));

        dp[0][0] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= s; j++) {

                if (nums[i - 1] <= j)
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][s];
        
    }
};