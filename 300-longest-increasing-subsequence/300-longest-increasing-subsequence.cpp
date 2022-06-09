class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        int i,j;
        int mixi = 0;
        
        vector<int>dp(nums.size(), 1);
    
        for(int i = 1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j] && dp[i]<dp[j]+1)
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
        
        for(auto x : dp)
        {
            if(x > mixi)
            {
                mixi = x;
            }
                
        }
        
        return mixi;
        
    }
};