class Solution {
public:
        
    bool isPalimdrome(string s) {
        
        int n = s.size() - 1;
        for(int i=0,j=n;i<j;i++,j--)
        {
            if(s[i]!=s[j])
                return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        
        string s="";
        for(int i = 0; i < words.size(); i++) {
            
            if(isPalimdrome( words[i] ))
                return words[i];
            
        }
        return s;
    }
};