class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
       int n = nums1.size() , m = nums2.size();
       int i = 0, j = 0;
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        set<int> s;
        vector<int> v;
        
        while(i < n && j < m)
        {
            if(nums1[i] < nums2[j])
                i++;
            else if(nums1[i] > nums2[j])
                j++;
            else 
            {
                 s.insert(nums1[i]);
                i++;
                j++;
                
            }
               
            
        }
        for(auto it : s) v.push_back(it);
        
        return v;
    }
};