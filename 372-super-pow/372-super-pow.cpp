class Solution {
public: 
    // ETF(1337) = 1140   - ETF means euler totient function
    
    // (a ^ b ) % m == (a ^ (b % ETF(m))) % m   - euler's theorem
    
    
    int Pow(int b , int i , int m){
        
        b = b % m ;
        
        int ans = 1;
        
        while(i){
            
            if(i & 1)
                ans = (ans * 1LL * b) % m; 
            b = (b * 1LL * b) % m; 
            i >>= 1;
        }
        return ans;
    }
    
    
    int func1( vector<int>& b ) {
        
        int n = b.size(), sum = 0;
        
        reverse(b.begin(),b.end());
        
        for(int i = 0 ; i < n ; i++) {
            
              sum += ( b[i] * Pow(10 , i ,1140) ) % 1140;
        }
        return sum;
    }
    
    int superPow(int a, vector<int>& b) {
        
            int n = func1(b);
        
        return Pow(a , n , 1337) % 1337;
        
    }
};