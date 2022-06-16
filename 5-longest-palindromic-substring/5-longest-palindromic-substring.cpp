class Solution {
public:
    string longestPalindrome(string s) {
         int n= s.size(), length = 0, start = 0;
        
        vector<vector<int>> dp(n, vector<int> (n, 0));
        
        for(int i = 0; i < n ; i ++) {
            dp[i][i] = 1;
            
            if(i < n - 1 && s[i] == s[i + 1])
                dp[i][i+1] = 1;
        }
        
        for(int i = n- 3; i >= 0; i --) {
            for(int j = i + 2; j < n; j ++) {
                if( s[i] == s[j] && dp[i + 1][j - 1])
                    
                    dp[i][j] = 1;
            }
        }
        
        for(int i = 0; i < n; i ++) {
            for(int j = i; j < n; j++) {
                if(dp[i][j] && length < j - i + 1)
                    length = j - i + 1, start = i;
            }
        }
        

        return s.substr(start, length);
        
    }
};