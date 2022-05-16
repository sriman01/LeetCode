// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    
    
  public:
    // Function to detect cycle in an undirected graph.
    
    bool isLoop = false;
    
    bool dfs(int vertex,vector<int> adj[],bool vis[],int par=-1)
    {
        vis[vertex]=true;
        for(int child : adj[vertex])
        {
            if(vis[child] && child == par) continue;
            if(vis[child] && child != par) return true;
           
            isLoop |=  dfs(child,adj,vis,vertex);
        }
        return isLoop;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool vis[V]={0};
        
        for(int i=0;i<V;i++)
        {
            if(vis[i]) continue;
            
            if(dfs(i,adj,vis))
            {
                isLoop = true;
                break;
                
            }
        }
        return isLoop;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends