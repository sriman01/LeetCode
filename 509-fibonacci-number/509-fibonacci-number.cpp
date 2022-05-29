class Solution {
public:
    int fibb(int n, vector<int> &dp)
    {
        if(n == 0) 
             return 0;
        if(n == 1) 
            return 1;
        
        if(dp[n] != -1) 
             return dp[n];
        
        return dp[n] = fibb(n - 1, dp) + fibb(n - 2, dp);
    }
    
    int fib(int n) {
        
        vector<int> dp(n+1,-1);
        
        return fibb(n,dp);
        
    }
};