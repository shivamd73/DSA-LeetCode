class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,l=0,h=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<prices[l])
            {
                l=i;
            }
            if(prices[i]>prices[l])
            {
                h=i;
                if(h>l && prices[h]-prices[l]>profit)
                    profit=prices[h]-prices[l];
            }
        }
        return profit;
    }
};