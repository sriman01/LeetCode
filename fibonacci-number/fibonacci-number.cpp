class Solution {
public:
       unordered_map<int, int> Map;
       int x;
    
    int fib(int n) {
        
        if(n == 0 || n == 1)
            return n;
        
        if(Map.find(n) != Map.end()) return Map[n];
        
         x = fib(n - 1) + fib(n - 2);
         Map.insert(make_pair(n, x));
        
        return x;
    }
};