class Solution {
public:
    
   static bool sortBYlength(string &S1, string &S2){
        return S1.size() > S2.size();
    }
        
    
    int minimumLengthEncoding(vector<string>& words) {
        string s = "";
        sort(words.begin(),words.end(), sortBYlength);
        
        for(auto word : words) {
            if(s.find(word + "#") == string::npos)
                s += word + "#";
            
        }
        
      return s.size(); 
        
    }
};