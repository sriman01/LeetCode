class Solution {
public:
    
    int LIS(int i, vector<int>& nums, vector<int>& dp) {
        int ans = 1;
        
        if(dp[i] != -1) return dp[i];
        
        for(int j = 0; j < i; j++) {
            if(nums[i] > nums[j])
                ans = max(ans, LIS(j, nums, dp) + 1);
        }
        
        return dp[i] = ans;
    }

    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size(), ans = 0;
        
        vector< int >dp(n, -1);
        
        for(int i = 0; i < n; i ++) {
            
            ans = max(ans, LIS(i, nums, dp));
        }
        return ans;
    }
};