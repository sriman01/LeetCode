class Solution {
public:
    
    unordered_map<int, int> m;
    int x;
    int steps(int n){
        if(n == 0 || n == 1)
            return 1;
        
        if(m.find(n) != m.end())
            return m[n];
        
        
        x = steps(n-1)+steps(n-2);
        
        m.insert(make_pair(n,x));
        
        return x;
        
    }
    int climbStairs(int n) {
        
        return steps(n);
        
    }
};