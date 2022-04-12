class Solution {
public:
    int xorOperation(int n, int start) {
        
        int s = 0;
        
        for(int i=0;i<n;i++)
        {
            int k = start + 2 * i;
            s^=k;
            
        }
       
        return s;
        
    }
};