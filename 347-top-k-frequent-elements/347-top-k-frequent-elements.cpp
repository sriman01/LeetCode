class Solution {
public:
    
    static bool sortbysec( pair<int, int> &a, pair<int, int> & b) {
       return a.second > b.second;

     }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map< int, int > m;
        vector< pair<int,int> > v2;
         for(auto it:nums)
           m[it]++;

         for(auto it: m)
           v2.push_back(it);

          sort(v2.begin(),v2.end(),sortbysec);
          nums.clear();
         
          for(auto it : v2){
              nums.push_back(it.first);
              if(k == 1) break;
              k-- ; 
              
          }
            return nums;
        
    }
};