class Solution {
public:
    int p(int n){
        int res=1;
        while(n!=0){
            int c=n%10;
            res*=c;
            n/=10;
        }
        return res;
    }
    int smallestNumber(int n, int t) {
        while(n){
        int digit=p(n);
        if(digit%t==0)return n;
        n++;
        }

        return 0;
    }
};