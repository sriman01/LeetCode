class Solution {
public:
    int helper(vector<int> arr, int target){
        int res=0;
        unordered_map<int, int> mp;
        int temp=0;
        for( auto x: arr){
            temp+=x;
            if(temp==target){
                res++;
            }
            if(mp[temp-target]){
                res+=mp[temp-target];
            }
            mp[temp]++;
        }
        return res;
    }
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int res=0;
        for(int z=0; z<n; z++){
            vector<int> temp;
            temp=matrix[z];
            for(int i=z;i <n; i++){
                for(int j=0; j<m; j++){
                    if(i==z)
                        continue;
                    else
                        temp[j]+=matrix[i][j];
                    
                }
                res+=helper(temp, target);
            }
        }
        return res;
    }
};