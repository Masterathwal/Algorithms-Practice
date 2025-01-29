class Solution {
public:
    int maxProfit(vector<int>& prices){
 
        int ans=0;
        int lowval = prices[0];

        for(int i=1; i<prices.size(); i++){

            lowval = min(prices[i],lowval);
            int profit = prices[i]-lowval;
            ans = max(ans,profit);
        }
        return ans; 
    }
};
