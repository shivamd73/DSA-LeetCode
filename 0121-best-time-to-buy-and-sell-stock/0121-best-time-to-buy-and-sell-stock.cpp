class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,l=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<prices[l])
            {
                l=i;
            }
            if(prices[i]>prices[l])
            {
                if(i>l && prices[i]-prices[l]>profit)
                    profit=prices[i]-prices[l];
            }
        }
        return profit;
    }
};