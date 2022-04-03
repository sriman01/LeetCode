class Solution {
public:
    

    int sumOddLengthSubarrays(vector<int>& arr) {
        
      int sum = 0, n = arr.size(), i = 0;
        while(i < n){
            
            int temp = ceil(double (i + 1) * (n - i) / 2);
            sum += (temp * arr[i]);
            i++ ;
        }
        return sum ;
    }
};

  // for(i =0;i<n;i++)
  // {
  //           int contribution = ceil((i+1)*(n-i)/2.0);
  //           ans+=(contribution*arr[i]);
  //       }
  //       return ans;