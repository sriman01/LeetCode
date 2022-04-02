class Solution {
public:
    
    bool check(string s, int l, int r){
       
        while(l < r){
            if(s[l] != s[r])
               return false;
            l++;
            r--;          
        }
        return true;      
    }
    
    bool validPalindrome(string s) {

        int len = s.size();
        int l = 0, r = len - 1;
        while(l < r){
            if(s[l] != s[r])
               return check(s, l, r - 1) || check(s, l + 1, r);
            l++;
            r--;
                
        }
        return true;
        
    }
};