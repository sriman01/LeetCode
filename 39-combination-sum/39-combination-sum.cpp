class Solution {
public:
    vector<vector<int>> v;
    
  void subse(int i, vector<int> &ds, int target, vector<int> &cand, int n) {
        
        if(i == n) {
            if(target == 0)
                v.push_back(ds);
            
            return;
        }
      
 if(cand[i] <= target){
             ds.push_back(cand[i]);
             subse(i, ds, target-cand[i], cand, n);
             ds.pop_back();
        }
       
        
        subse(i + 1, ds, target, cand, n);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> ds;

        subse(0, ds, target, candidates, candidates.size());
        
        return v;
        
    }
};