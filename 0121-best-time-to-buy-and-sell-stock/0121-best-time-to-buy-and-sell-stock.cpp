class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //    int n = prices.size();
    //    int ans =0;
    //    int mini = prices[0];
    //    for(int i=1; i<n; i++){
    //     int profit = prices[i]-mini;
    //     ans = max(ans,profit);
    //     mini = min(mini, prices[i]);
    //    }
    //    return ans;


    int n= prices.size();
    int profit =0;
    int mini = prices[0];
    for( int i=1; i<n; i++){
        int cost = prices[i] - mini;
         profit = max(profit,cost);
        mini = min(mini, prices[i]);
    }
    return profit;
     }
};