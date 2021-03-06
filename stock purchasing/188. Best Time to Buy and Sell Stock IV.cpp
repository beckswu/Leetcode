/*


188. Best Time to Buy and Sell Stock IV


Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete at most k transactions.

Note:
You may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).



*/


class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(k>prices.size()/2)
        {
            int profit = 0;
            for(int i = 1; i<prices.size();i++){
                profit += max(prices[i]-prices[i-1],0);
            }
            return profit;
        }
        
        if(prices.size()==0) return 0;
        vector<int>dp(prices.size(),0);
        
        for(int n = 1; n<=k && n<prices.size(); n++){
            int tempmax = -prices[0];
            for(int i = 1; i<prices.size();i++){
                int lastprof = dp[i];
                dp[i] = max(tempmax + prices[i], dp[i-1]);
                tempmax = max(tempmax, lastprof-prices[i]);
            }
        }
        return dp[prices.size()-1];
    }
};




//not a good solution but it works
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(prices.size()==0) return 0;
        vector<int>dp(prices.size(),0);
        
        for(int n = 1; n<=k && n<prices.size(); n++){
            int tempmax = -prices[0];
            for(int i = 1; i<prices.size();i++){
                int lastprof = dp[i];
                dp[i] = max(tempmax + prices[i], dp[i-1]);
                tempmax = max(tempmax, lastprof-prices[i]);
            }
        }
        return dp[prices.size()-1];
    }
};