class Solution {
    bool isSafe(int row, int col, vector<string> &container, int n){
        int drow = row;
        int dcol = col;
        
        while(row >= 0 && col >= 0){
            if(container[row][col] == 'Q')
                return false;
            row --;
            col --;
            }
        
        row = drow;
        col = dcol;
        
        while( col >= 0){
            if(container[row][col] == 'Q')
                return false;
            col --;
        }
        
        col = dcol;
        
        while( row < n && col >= 0){
            if(container[row][col] == 'Q')
                return false;
            
            col --;
            row ++;
            
        }
        
        return true;
    }
public:
    void Solve(int col, vector<string> &container, vector<vector<string>> &res, int n) {
        if(col == n) {
            res.push_back(container);
            return;
        }
        for(int row = 0; row < n; row++) {
            if(isSafe(row, col, container, n)){
                container[row][col] = 'Q';
                Solve(col + 1, container, res, n);
                container[row][col] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> container;
        
        string s(n, '.');
        
        for(int i = 0;i < n; i ++){
            container.push_back(s);
        }
        
        Solve(0, container, res, n);
        
        return res;
        
    }
};