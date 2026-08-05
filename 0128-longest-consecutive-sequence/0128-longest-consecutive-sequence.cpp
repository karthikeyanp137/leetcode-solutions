class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        set<int>s(nums.begin(),nums.end());
        vector<int>v(s.begin(),s.end());
        vector<int>ans;
        int c=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1]-v[i]==1){
                   c++;
            }
            else{
                ans.push_back(c);
                c=0;
            }
        }
        ans.push_back(c);
        int maxi=*max_element(ans.begin(),ans.end());
        return maxi+1;
    }
};