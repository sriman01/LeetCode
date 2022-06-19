#define ll long long
class Solution {
public:
    
    const int M = 1e9+7;
    int count = 0;
    
   int pow(int a, int b){
        int ans = 1;
    while (b)
    {
        if(b & 1)
         ans = (ans*1ll*a) % M;
        
        a = (a *1ll* a) % M;
         b >>= 1;
         
    }
    
    return ans;
   }

    int numSubseq(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        
        int start = 0, last = nums.size() - 1;
        
        while(start <= last){
            if(nums[start] + nums[last] <= target) {
                count = (1ll*count + pow(2, last - start) % M)%M;
                start ++;
            }
            else
                last --;
        }
        return count;
    }
};