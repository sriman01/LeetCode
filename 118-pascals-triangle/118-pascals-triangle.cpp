   
class Solution {
public:

   int pascal(int row , int col , vector<vector<int>> &dp) {
        
        if(col == 0 ||  col == row)
            return 1;
       
        if(dp[row][col] != 0) return dp[row][col] ;
        return dp[row][col]  = pascal(row - 1, col - 1 , dp) + pascal(row-1,col,dp);
    }
    
    vector<vector<int>> generate(int rowIndex) {
        
       vector<int> v ;
        
        vector<vector<int>> vv;
        int x = rowIndex;
        
        vector<vector<int>> dp(x,vector<int>(x,0));
        
        for(int i = 0;i<rowIndex;i++){
            
             for(int j = 0;j<=i;j++){
                   if(dp[i][j] != 0)   continue;
                       dp[i][j] = (pascal(i, j , dp));
                          v.push_back(dp[i][j]);
              }
            vv.push_back(v);
            v.clear();
        }
             
        return vv;
        
    }
};
    