class Solution {
public:
    int LCS(int idx1, int idx2, string &s1, string &s2, vector<vector<int>>& dp) {
        
        int length = 0;
        if(idx1 < 0 || idx2 < 0)
            return 0;
        
        if(dp[idx1][idx2] != -1)
            return dp[idx1][idx2];
        
        if(s1[idx1] == s2[idx2])
           return dp[idx1][idx2] = 1 + LCS(idx1 - 1, idx2 - 1, s1, s2, dp);
        else
            return dp[idx1][idx2] = max(LCS(idx1 - 1, idx2, s1, s2, dp), LCS(idx1, idx2 - 1, s1, s2, dp));
        
        
    }
    
    int minDistance(string word1, string word2) {
        
        int word1_size = word1.size(), word2_size = word2.size();
        
        vector< vector< int > > dp(word1_size, vector< int >(word2_size, -1));

        int n = LCS(word1_size - 1, word2_size - 1, word1, word2, dp);
        
        return ( word1_size + word2_size - 2 * n );
        
    }
};