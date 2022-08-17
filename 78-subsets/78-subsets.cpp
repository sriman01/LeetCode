class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n =  nums.size();
        int subset_number = (1<<n);
        vector<vector<int>> res;
        for(int i = 0; i < subset_number; i++){
            vector<int> vec;
            for(int j = 0; j < n; j++){
                if((i & (1<<j)) != 0)
                    vec.push_back(nums[j]);
            }
            
            res.push_back(vec);
        }
        return res;
    }
};