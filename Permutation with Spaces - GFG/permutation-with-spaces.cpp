//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    void solve(int idx, string temp, string S, vector<string> &res){
        if(idx >= S.size()){
            res.push_back(temp);
            return;
        }
        temp.push_back(' ');
        temp.push_back(S[idx]);
        solve(idx + 1, temp, S, res);
        temp.pop_back();
        temp.pop_back();
        temp.push_back(S[idx]);
        solve(idx + 1, temp, S, res);

    }

    vector<string> permutation(string S){
        // Code Here
    
        string temp = "";
        temp.push_back(S[0]);
        vector<string> res;
        int idx = 1;
        
        solve(idx, temp, S, res);
        return res;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends