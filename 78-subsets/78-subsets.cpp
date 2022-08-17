class Solution {
public:
    
   void subset(int i, int n,vector<int> &v, vector<int> &temp, vector<vector<int>> &res){

	if(i == n){
			res.push_back(temp);
		    return;
	}

    temp.push_back(v[i]);
	subset(i + 1, n, v, temp, res);
	temp.pop_back();
	subset(i + 1, n, v, temp, res);

 }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n =  nums.size();
        
        vector<int> temp;
        vector<vector<int>> res;
        
        subset(0, n, nums, temp, res);
        
        return res;
    }
};