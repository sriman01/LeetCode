class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        stack<int> s;
        vector<int> res(n);
        
        for(int i = 2*n - 1; i >= 0; i--){
            while(!s.empty() && s.top() <= nums[i%n])
                s.pop();
            
            if(i < n){
                if(!s.empty())
                    res[i] = s.top();
                else
                    res[i] = -1;
            }
            s.push(nums[i%n]);
        }
        return res;
    }
};