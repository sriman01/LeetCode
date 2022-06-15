class Solution {
public:
    
    int LIS(int n, int m,int size, vector<int>& nums, vector<vector<int>>& dp) {
        if(n == size)
            return 0;
        
        if(dp[n][m + 1] != -1) return dp[n][m + 1];
        
       int length = LIS(n+1, m, size, nums, dp);
        
        if(m == -1 || nums[ m ] < nums[ n ]) 
            length = max(length, 1 + LIS(n+1, n, size, nums, dp));
            
        
        return dp[ n ][m + 1] = length;
        
             
        
    }
    int lengthOfLIS(vector<int>& nums) {
        
        int size = nums.size();
        
        vector<vector< int >> dp(size, vector<int>(size+1, -1));
        
          return LIS(0, -1, size, nums, dp);
    }
};