class Solution {
public:
    int countHillValley(vector<int>& nums) {
        
        int len = nums.size(),count=0;
        
        for( int i = 1, prev = 0; i < len-1; i++){
            
            if(nums[i] == nums[i+1])
              continue;
            
            if((nums[prev] > nums[i] && nums[i+1] > nums[i]) || (nums[prev] < nums[i] && nums[i] > nums[i+1])){
                count++; 
                prev=i;
            }
              
        }
        return count;
    }
};