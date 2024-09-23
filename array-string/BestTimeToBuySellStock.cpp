class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit=0, curr = prices[0];
        for(int i=1; i<n; i++){
            profit = max(profit, prices[i]-curr);
            if(prices[i] < curr)
                curr = prices[i];
        }
        return profit;
    }
};