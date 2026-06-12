class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            min_price = min(min_price, prices[i]);
            int profit = prices[i] - min_price;
            maxprofit = max(maxprofit, profit);
        }
        return maxprofit;
    }
};
