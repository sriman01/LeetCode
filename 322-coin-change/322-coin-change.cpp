class Solution {
public:
     int Number(int amount, vector<int>& coins, vector<int>& dp) {
         if(amount == 0)
             return 0;
         if(dp[amount] != -1)
             return dp[amount];
         
         int ans = INT_MAX;
         for(int coin : coins) {
             if(amount - coin >= 0)
             ans = min(ans + 0ll, Number(amount - coin, coins, dp) + 1ll);
         }
         return dp[amount] = ans;
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int> dp (amount + 1, -1);
        
        int ans = Number(amount, coins, dp);
        
        return ans == INT_MAX ? -1 : ans;

    }
};