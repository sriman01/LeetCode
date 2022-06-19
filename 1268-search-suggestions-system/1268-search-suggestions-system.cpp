class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
        multiset<string> mul_Set;
        vector<string> temp;
        vector<vector<string>> res;
        
        string current = "";
        
        for(auto letter : searchWord) {
            current += letter;
            mul_Set.clear();
            for(auto S :  products) {
                if(S.substr(0,current.size()) == current)
                    mul_Set.insert(S);
            }
                temp.clear();
                for(int i = 0; i < 3 && !mul_Set.empty(); i++) {
                    temp.push_back(*mul_Set.begin());
                    mul_Set.erase(mul_Set.begin());
                }
                res.push_back(temp);
        }
        return res;
    }
};