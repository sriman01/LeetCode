class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int> m;
        int value=0;
        for(auto it:nums)
            m[it]++;
        
        for(auto it:m)
        {
            if(it.second>floor(nums.size()/2))
            {
                value=it.first;
                break;
                
            }
        }
        return value;
        
    }
};