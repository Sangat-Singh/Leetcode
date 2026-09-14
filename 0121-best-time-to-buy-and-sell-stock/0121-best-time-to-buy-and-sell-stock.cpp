class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int minprice=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            minprice=min(minprice,prices[i]);
            int profit = prices[i]-minprice;
            maxp=max(maxp,profit);
        }
        return maxp;
        
        
    }
};