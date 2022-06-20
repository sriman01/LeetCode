class Solution {
public:
    vector<vector<int>> res;
    
    void Sum3(int idx, vector<int> &vec, vector<int> &temp, int n, int k) {
        
        if(idx == 9) {
            if(n == 0 && temp.size() == k)
                res.push_back(temp);
            
            return;
        }
        
        if(vec[idx] <= n) {
            temp.push_back(vec[idx]);
            Sum3(idx + 1, vec, temp, n - vec[idx], k);
            temp.pop_back();
        }
        
        Sum3(idx + 1, vec, temp, n, k);
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> vec = {1,2,3,4,5,6,7,8,9};
        vector<int> temp;
        
        Sum3(0, vec, temp, n, k);
        
        return res;
        
    }
};