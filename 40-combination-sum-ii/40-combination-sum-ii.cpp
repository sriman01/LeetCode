class Solution {
public:
    vector<vector<int>> res;
    void Sum2(int idx, vector<int> &temp, vector<int> &cand, int n, int target) {
        if(idx == n) {
            if(target == 0)
                res.push_back(temp);
            return;
        }
        
        if(cand[idx] <= target) {
            temp.push_back(cand[idx]);
            Sum2(idx + 1, temp, cand, n, target - cand[idx]);
            temp.pop_back();
        }
        idx++;
        while(idx < n && cand[idx - 1] == cand[idx] ) idx++;
        Sum2(idx, temp, cand, n, target);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        int n = candidates.size();
        
        Sum2(0, temp, candidates, n, target);
        
        return res;
    }
};