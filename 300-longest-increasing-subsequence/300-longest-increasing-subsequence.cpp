class Solution {
public:
    
    int func(int i, vector<int> &nums, vector<int>& dp){
        int ans = 1;
        
        if(dp[i] != -1)
            return dp[i];
        
        for(int j = 0; j < i; j++){
            if(nums[i] > nums[j])
               ans = max(ans, func(j, nums, dp)+1);
        }
        
        return dp[i] = ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        
        int ans = 0;
        
        int n =nums.size();
        
        vector< int > dp(n, -1);
        
        for(int i = 0; i < n; i++)     
            ans = max(ans, func(i, nums, dp));
        return ans;
    }
};