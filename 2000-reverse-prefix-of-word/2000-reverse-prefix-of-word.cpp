class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int n = word.size();
      
        auto it = word.find(ch);
        
        int j = it , i = 0;
        
        while(i < j){
            swap(word[i], word[j]);
            i++;
            j--;
        }
        
        return word;
    }
};