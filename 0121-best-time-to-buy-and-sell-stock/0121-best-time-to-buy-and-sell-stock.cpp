class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int maxProfit{0}, currProfit{0}, buy{0}, sell{1};

        while(sell<n){
            while(buy<sell && sell<n){
                if(prices[sell]-prices[buy]<=0){
                    buy=sell;
                    sell++;
                }else{
                    currProfit=prices[sell]-prices[buy];
                    maxProfit= max(currProfit, maxProfit);
                    sell++;
                }
            }
        }

        return maxProfit;
    }
};