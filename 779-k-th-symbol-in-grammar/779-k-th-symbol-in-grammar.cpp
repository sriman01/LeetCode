class Solution {
public:
    int kthGrammar(int n, int k) {
        
        if(n==1 )
            return 0;
        
        int x = kthGrammar( n - 1, ceil( k / 2.0 ));
        
        if( k & 1 )
            return x;
        else
            return ! x;
        
    }
};