class Solution {
public:
    vector<int> diStringMatch(string s) {
           
        std::vector<int> adder;
        for(int i = 0 ; i < s.length()+1;i++)
        {
            adder.push_back(i);
        }
        int i = 0,j = adder.size()-1;
        std::vector<int> result;
        for(int z = 0 ; z < s.length();z++)
        {
            if(s[z] == 'I')
            {
                result.push_back(adder[i]);
                i++;
            }
            else{
                result.push_back(adder[j]);
                j--;
            }
        }
        if(s[s.length()-1] == 'D')
        {
            result.push_back(adder[i]);
        }
        else{
            result.push_back(adder[j]);
        }
        return result;
    }
};