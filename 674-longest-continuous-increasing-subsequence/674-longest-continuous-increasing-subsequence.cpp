class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int n = nums.size();
        int len = 1, ans = 1;
        for(int i = 0; i < n-1; i++) {
            if(nums[i] < nums[i+1]) {
                len++;
                ans = max(ans, len);
            }
            
            else {
                len = 1;
            }
        }
        return ans;
    }
};