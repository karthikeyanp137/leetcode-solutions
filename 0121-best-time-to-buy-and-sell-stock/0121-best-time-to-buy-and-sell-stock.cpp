class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minprice=INT_MAX;
        for(auto p:prices){
             minprice=min(minprice,p);
             profit=max(profit,p-minprice);
        }
        return profit;
    }
};