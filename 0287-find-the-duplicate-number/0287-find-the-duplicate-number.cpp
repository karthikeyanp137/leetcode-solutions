class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>freq;
        for(auto x:nums){
            freq[x]++;
        }
        for(auto x:freq){
            if(x.second>1){
                return x.first;
            }
        }
        return 0;
    }
};