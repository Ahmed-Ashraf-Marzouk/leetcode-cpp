class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0,r = 1; 
        int max_p = 0;
        while(r < prices.size())
        {
            if(prices[l] < prices[r])
            {
                int p = prices[r] - prices[l];
                max_p = max(max_p, p);
            }
            else 
                l = r; 
            r++; 
        }
        return max_p; 
    }
};