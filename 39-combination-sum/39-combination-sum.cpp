class Solution {
public:
    vector<vector<int>> res;
    
    void Sum(int idx, vector<int> & temp, int target, vector<int> &cand, int n) {
        if(idx == n) {
            if(target == 0)
                res.push_back(temp);
            
            return;
        }
        if(cand[idx] <= target){
             temp.push_back(cand[idx]);
             Sum(idx, temp, target-cand[idx], cand, n);
             temp.pop_back();
        }
       
        
        Sum(idx + 1, temp, target, cand, n);
        
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        int n = candidates.size();
        vector<int> temp;
        
        Sum(0, temp, target, candidates, n);
        
        return res;
    }
};