class Solution {
public:
    
    int Ways(int idx, int amount, vector<int>& coins, vector<vector<int>> &dp) {
        if(amount == 0)
            return 1;
        if(idx < 0)
            return 0;
        if(dp[idx][amount] != -1)
            return dp[idx][amount];
        int ways = 0;
        for(int coin = 0; coin <= amount; coin += coins[idx])
            ways += Ways(idx - 1, amount - coin, coins, dp);
        
        return dp[idx][amount] = ways;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        
        vector<vector<int>> dp(n, vector<int>(amount + 1,-1));
        
        return Ways(n - 1, amount, coins, dp);
    }
};