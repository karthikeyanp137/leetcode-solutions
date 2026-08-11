class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1;
        vector<int> v2;

        stringstream ss(version1);
        string x;

        while(getline(ss,x,'.')){
            v1.push_back(stoi(x));
        }

        stringstream s(version2);
        string y;

        while(getline(s,y,'.')){
            v2.push_back(stoi(y));
        }
        int n1=v1.size();
        int n2=v2.size();
         
        while(n1>n2){
            v2.push_back(0);
            n2++;
        }
        while(n1<n2){
            v1.push_back(0);
            n1++;
        }
        for(int i=0;i<n1;i++){
             if(v1[i]<v2[i]){
                return -1;
             }
             else if(v1[i]>v2[i]){
                return 1;
             }
        }
        return 0;
        
    }
};