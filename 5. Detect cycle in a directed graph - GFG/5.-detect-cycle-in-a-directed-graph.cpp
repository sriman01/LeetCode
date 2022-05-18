// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
   bool dfs(int vertex, vector<int> adj[],vector<bool> &vis,vector<bool> &stk)
  {
    stk[vertex]=true;
    if(!vis[vertex])
    {vis[vertex] = true;
    for(int child : adj[vertex])
    {
      if(!vis[child] && dfs(child,adj,vis,stk))
       return true;
      if(stk[child])
      return true;
     }
    }
    stk[vertex] = false;
    return false;
  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        
        vector<bool> vis(V,false);
        vector<bool> res(V,false);
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i] && dfs(i,adj,vis,res))
             return true;
        }
        
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends