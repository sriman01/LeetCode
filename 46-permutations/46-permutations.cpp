class Solution {
public:
    vector<vector<int>> res;
    
    void Permutation(vector<int> &nums,vector<int> & temp, vector<bool> &picked, int n) {
        if(temp.size() == n){
            res.push_back(temp);
            
            return;
        }
        
        for(int i = 0; i < n; i++) {
            if(!picked[i]){
                picked[i] = true;           
                temp.push_back(nums[i]);                   // pick
                Permutation(nums, temp, picked, n);
                temp.pop_back();                           // not pick
                picked[i] = false;
            }
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<bool> picked(n, false);
        vector<int> temp;
        Permutation(nums,temp, picked, n);
        return res;
        
    }
};