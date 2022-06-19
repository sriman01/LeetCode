class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {

        sort(products.begin(), products.end());
        
        unordered_map<string, vector<string>> ump;
        string sub = "";
        for(auto it : searchWord) {
            
              sub += it;
            
            for(auto product : products) {
              
                if(sub == product.substr(0, sub.size()) && ump[sub].size() < 3) {
                    ump[sub].push_back(product);
                }
            }
        }
    
        vector<vector<string>> res;
        string s = "";
        for(auto it : searchWord) {
             s += it;
            
            res.push_back(ump[s]);
        }
        return res;
    }
};