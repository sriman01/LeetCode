class Solution {
public:
    vector<vector<int>> res;
    
    void Sum2(int idx, vector<int> &cand, vector<int> &temp, int target, int n) {
      
         if(target == 0){
                res.push_back(temp);
            return;
        }
    
    for(int i = idx; i < cand.size(); i++){
        if(i > idx && cand[i] == cand[i - 1]) continue;
        if(target < cand[i]) break;
        temp.push_back(cand[i]);
        Sum2(i+1, cand, temp, target - cand[i], n);
        temp.pop_back();
      }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        
        vector<int> temp;
        
        Sum2(0, candidates, temp, target, candidates.size());
        
        return res;
        
    }
};