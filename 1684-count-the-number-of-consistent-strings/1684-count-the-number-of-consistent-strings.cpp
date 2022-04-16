class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
    
        int res = words.size();
        bool alpha[26] = {0};
    
        for (char c: allowed){
             alpha[c - 'a'] = 1; 
        }
           
        for (string word: words) {
             for (char c: word){
                 if (!alpha[c - 'a']) {
                   res--;
                    break;
               }
               
            }
        }
        return res;
  
    }
};