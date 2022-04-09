class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
       int n = nums.size();
        
        vector<int> v;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] & 1){
                v.push_back(0);
                v.push_back(nums[i]);
            }
        }
        int j = 0;
        for(int i = 0;i < n; ++i){
            
            if(!(nums[i] & 1)){
                v[j] = nums[i];
                j+=2;
            }
            
        }
        return v; 
    }
};