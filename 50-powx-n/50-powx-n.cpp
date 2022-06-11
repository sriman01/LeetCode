class Solution {
public:
    
    double powP(double x , int n){
        if(n == 0)
            return 1.000;
        
        double y = powP(x, n/2);
        
        return (n & 1) ? x*y*y : y*y;
        
    }
    
    double myPow(double x, int n) {
        
         if(n >= 0)
             return powP(x, n);
        else
            return 1/powP(x, n);
        
    }
};