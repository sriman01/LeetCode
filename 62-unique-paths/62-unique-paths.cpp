class Solution {
public:

    int Ways(int m, int n,   vector<vector<int>> &v) {
        if(m == 0 || n == 0)
            return 1;
        
        if(v[m][n] != -1)
            return v[m][n];
        
        return v[m][n] = Ways(m - 1, n, v) + Ways(m, n - 1, v);
    }
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> v(m, vector<int>(n, -1));
        return Ways(m - 1, n - 1, v);
    }
};