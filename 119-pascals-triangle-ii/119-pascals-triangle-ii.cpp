class Solution {
public:

   int pascal(int row , int col , vector<vector<int>> &dp) {
        
        if(col == 0 ||  col == row)
            return 1;
       
        if(dp[row][col] != 0) return dp[row][col] ;
        return dp[row][col]  = pascal(row - 1, col - 1 , dp) + pascal(row-1,col,dp);
    }
    
    vector<int> getRow(int rowIndex) {
        
       vector<int> v ;
        
        int x = rowIndex+1;
        
        vector<vector<int>> dp(x,vector<int>(x,0));
        
        for(int i = 0;i<=rowIndex;i++){
            
             for(int j = 0;j<=i;j++){
                   if(dp[i][j] != 0)   continue;
                       dp[i][j] = (pascal(i, j , dp));
                       if(i==rowIndex)
                          v.push_back(dp[i][j]);
                 
              }
        }
             
        return v;
        
    }
};