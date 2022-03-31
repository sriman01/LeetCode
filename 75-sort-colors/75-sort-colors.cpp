class Solution {
public:
    void sortColors(vector<int>& nums) {
    
        int count[]={0,0,0};
         vector<int> v;
       for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) count[0]++;
	        else if(nums[i]==1) count[1]++;
	        else if(nums[i]==2) count[2]++;

         }
    int i=0;
    while(i!=3)
     {
	  for(int j=0;j<count[i];j++)
	  {
		  v.push_back(i);
	  }
	  i++;  
    }
        
    for(int i=0;i<v.size();i++)
    {
        nums[i]=v[i];
    }
    
    }
};