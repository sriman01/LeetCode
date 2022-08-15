class Solution {
public:
    int climbStairs(int n) {
        int prev1 = 1, prev2 = 2;
        
        if(n == 1)
            return prev1;
        
        for(int i = 3; i <= n; i++){
            int curr = prev1+prev2;
            prev1 = prev2;
            prev2 = curr;
        }
        
        return prev2;
        
    }
};