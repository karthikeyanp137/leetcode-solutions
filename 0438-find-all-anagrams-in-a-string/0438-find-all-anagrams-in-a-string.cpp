class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        unordered_map<char,int>sfreq;
        unordered_map<char,int>pfreq;
        for(auto x:p)pfreq[x]++;
        int n=s.size();
        int k=p.size();
        for(int i=0;i<k;i++){
            sfreq[s[i]]++;
        }
        if(sfreq==pfreq){
            ans.push_back(0);
        }
        for(int i=k;i<n;i++){
            sfreq[s[i-k]]--;
            sfreq[s[i]]++;
            if(sfreq[s[i-k]]==0)sfreq.erase(s[i-k]);
            if(sfreq==pfreq) ans.push_back(i-k+1);
        }
        return ans;
    }
};