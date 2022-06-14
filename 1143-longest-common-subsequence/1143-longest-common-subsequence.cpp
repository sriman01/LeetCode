class Solution {
public:
    int LCS(int n, int m, string &s1, string &s2, vector<vector<int>>& dp) {
        if(n < 0 || m < 0)
            return 0;
        if(dp[n][m] != -1)
            return dp[n][m];
        if(s1[n] == s2[m])
            return dp[n][m] = 1 + LCS(n - 1, m - 1, s1, s2, dp);
        else
            return dp[n][m] = max(LCS(n - 1, m, s1, s2, dp), LCS(n, m - 1, s1, s2, dp));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.size(), m = text2.size();
        
        vector< vector< int > > dp(n, vector< int >(m, -1));
        
        return LCS(n - 1, m - 1, text1, text2, dp);
        
    }
};