class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    set<int>a(nums.begin(),nums.end());
    vector<int>b(a.begin(),a.end());
    int n=b.size();
   
    int mx=0,count=0;
    
    if(n==0)
    {
        return 0;
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(b[i+1]!=b[i]+1)
        {
           mx=max(count,mx);
            count=0;
        }
        
        else
        {
            count++;
        }
        
    }
    
    mx=max(mx,count);
    

  
    
 return mx+1;
        
    }
};