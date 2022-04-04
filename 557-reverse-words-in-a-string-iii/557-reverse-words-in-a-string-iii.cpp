class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string s1="";
        string str="";
        
       for(auto it : s){
           
           if(it==' '){
               reverse(str.begin(), str.end());
               s1 = s1 + str +' ';
               str="";
           }
           else
               str = str + it;
       }
        
        reverse(str.begin(), str.end());
        s1 = s1 + str;
           
        return s1;
    }
};