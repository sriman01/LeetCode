//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    private:
    void solve(int open, int close, int n, string temp, vector<string> &res){
        if(close > n || open > n)
          return;
          
        if(close == n && open == n){
            res.push_back(temp);
            return;
        }
        
        if(open <= n){
            solve(open + 1, close, n, temp + '(', res);
        }
        
        if(close < open)
          solve(open, close +  1, n, temp + ')', res);

    }
    public:
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        string temp = "";
        int open = 0, close = 0;
        vector<string> res;
        
        solve(open, close, n, temp, res);
        return res;
        
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends