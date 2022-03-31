class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
         map<int,int> m;
         vector<int> v;
        for(auto it:nums)
            m[it]++;
        
        for(auto it:m)
        {
            if(it.second>floor(nums.size()/3))
            {
                v.push_back(it.first);
                
            }
        }
        return v;
    }
};