class Solution {
public:
    vector<vector<int>> res;
    
    void Subset(int idx, vector<int> &temp, vector<int> &nums, int n) {
        if(idx == n) {
            res.push_back(temp); 
            return;
        }
         // pick
        temp.push_back(nums[idx]);
        Subset(idx + 1, temp, nums, n);
        // not pick
        temp.pop_back();
        idx ++;
        while(idx < n && nums[idx - 1] == nums[idx]) idx++;
        Subset(idx, temp, nums, n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<int> temp;
        Subset(0, temp, nums, nums.size());
        
        return res;
        
    }
};