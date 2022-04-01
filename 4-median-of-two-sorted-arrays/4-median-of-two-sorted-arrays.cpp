class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
       nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        double d;
        int index;
        if(nums1.size()&1)
        {
            index=(nums1.size()+1)/2;
            
            d=double(nums1[index-1]);
            
        }
        else
        {
            index=nums1.size()/2;
            
            d=double(nums1[index-1]+nums1[index])/2;
        }
        
        return d;
    }
};