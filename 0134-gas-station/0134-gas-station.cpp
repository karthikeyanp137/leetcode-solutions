class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int>gain;
        int total=0,st=0;
        for(int i=0;i<gas.size();i++){
            gain.push_back(gas[i]-cost[i]);
            total+=gain[i];
        }
        if(total<0) return -1;
        int tank=0;
        for(int i=0;i<gain.size();i++){
            tank+=gain[i];
            if(tank<0){
               st=i+1;
               tank=0;
            } 
        }
        return st;
    }
};