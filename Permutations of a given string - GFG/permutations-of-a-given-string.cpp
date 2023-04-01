//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
        void solve(int idx, set<string> &res, string S){
            if(idx >= S.size()){
                res.insert(S);
                return;
            }
             
            for(int i = idx; i < S.size(); i ++){
                swap(S[i], S[idx]);
                solve(idx + 1, res, S);
                swap(S[i], S[idx]);
            }
        }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string> res;
		    int idx = 0;
		    
		    solve(idx, res, S);
		    vector<string> ans;
		    
		    for(auto it : res)
		       ans.push_back(it);
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends