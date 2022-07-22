class Solution {
    void swap(int i, int j, vector<int> &nums) {
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
public:
    vector<vector<int>> res;
    
    void Permutation(int idx, vector<int> &nums, int n) {
        if(idx == n){
            res.push_back(nums);
            
            return;
        }
        
        for(int i = idx; i < n; i++){
            swap(i, idx, nums);
            Permutation(idx + 1, nums, n);
            swap(i, idx, nums);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        Permutation(0, nums, nums.size());
        
        return res;
        
    }
};