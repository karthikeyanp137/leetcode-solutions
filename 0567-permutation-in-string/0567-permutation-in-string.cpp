class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>s1freq;
        map<char,int>s2freq;
        for(auto x:s1)s1freq[x]++;
        int n=s2.size();
        int k=s1.size();
        if(k>n)return false;
        for(int i=0;i<k;i++){
             s2freq[s2[i]]++;
        }
        if(s1freq==s2freq)return true;
        for(int i=k;i<n;i++){
              s2freq[s2[i-k]]--;
              s2freq[s2[i]]++;
              if(s2freq[s2[i-k]]==0) s2freq.erase(s2[i-k]);
              if(s1freq==s2freq)return true;
        }
        return false;

    }
};