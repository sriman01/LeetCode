class Solution {
public:
    int dp[10010];
    
     int Number(int amount, vector<int>& coins) {
         if(amount == 0)
             return 0;
         if(dp[amount] != -1)
             return dp[amount];
         
         int ans = INT_MAX;
         for(int coin : coins) {
             if(amount - coin >= 0)
             ans = min(ans + 0ll, Number(amount - coin, coins) + 1ll);
         }
         return dp[amount] = ans;
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
        
      memset(dp, -1, sizeof(dp));
        
        int ans = Number(amount, coins);
        
        return ans == INT_MAX ? -1 : ans;

    }
};