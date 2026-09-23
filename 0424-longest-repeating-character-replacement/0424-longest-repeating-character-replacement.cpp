class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,n=s.size(),maxlen=0,maxfreq=INT_MIN;
        unordered_map<char,int>m;
        while(r<n){
            m[s[r]]++;
            maxfreq=max(maxfreq,m[s[r]]);

            if((r-l+1) - maxfreq <= k){
                maxlen=max(maxlen,r-l+1);
            }
            else{
                m[s[l]]--;
                l++;
            }
            r++;
        }
        return maxlen;
    }
};