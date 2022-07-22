class Solution {
public:
    vector<vector<int>> res;
    
    void Sum2(int idx, vector<int> &cand, vector<int> &temp, int target, int n) {
        if(idx == n) {
            if(target == 0){
                res.push_back(temp);
            }
            return;
        }
    
    if(target >= cand[idx]){
        temp.push_back(cand[idx]);
        Sum2(idx + 1, cand, temp, target - cand[idx], n);
        temp.pop_back(); 
    }
        idx ++;
        
        while(idx < n && cand[idx - 1] == cand[idx]) idx++;
        Sum2(idx, cand, temp, target, n);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        
        vector<int> temp;
        
        Sum2(0, candidates, temp, target, candidates.size());
        
        return res;
        
    }
};