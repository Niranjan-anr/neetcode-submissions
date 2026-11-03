class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size()<2)
        {
            return 0;
        }
        int ans=0, min_buy=prices[0];
        for(int i=1; i<prices.size(); i++)
        {
            if (prices[i]-min_buy>ans)
            {
                ans=prices[i]-min_buy;
            }
            if(min_buy>prices[i])
            {
                min_buy=prices[i];
            }
        }
        return ans;
    }
};
