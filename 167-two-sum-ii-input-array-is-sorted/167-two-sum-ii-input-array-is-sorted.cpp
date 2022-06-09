class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> v;
        int i = numbers.size() - 1 , j = 0;
        
        while(i > j)
        {
            if(numbers[i] + numbers[j] < target){
                       j++;
                  continue;
                
            }
         
            if(numbers[i] + numbers[j] > target){
                i--;
                continue;
                
            }
               
            if(numbers[i]+numbers[j] == target)
            {
                v.push_back(min(i,j)+1);
                v.push_back(max(i,j)+1);
                
                return v;
            }
                
        }
       
        return v;
    }
};