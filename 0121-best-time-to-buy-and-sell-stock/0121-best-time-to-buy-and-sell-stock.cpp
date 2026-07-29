class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     int n = prices.size();
    //     long long maxprofit=0;
    //     long long minprice=INT_MAX;
    //     for(int i=0;i<n;i++){
    //         minprice=min(minprice,(long long)prices[i]);
    //         maxprofit= max(maxprofit,(long long)prices[i]-minprice);
    //     }
    // return maxprofit; 
            int n=prices.size();
            int minprice=INT_MAX;
            int profit=0;
            for(int i=0;i<n;i++){
                minprice=min(minprice,prices[i]);
                profit=max(profit,prices[i]-minprice);
            }
    return profit;
    }
};