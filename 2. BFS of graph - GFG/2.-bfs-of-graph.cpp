// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    
   vector<int> bfs(int vertex,vector<int> adj[],bool vis[])
    {
        vector<int> vec;
        queue<int> q;
        q.push(vertex);
        vis[vertex] = true;
        
        while(!q.empty())
        {
            int temp = q.front();
             vec.push_back(temp);
             q.pop();
            for(int child : adj[temp])
            {
                if(!vis[child])
                {
                 q.push(child);
                vis[child]=true;
                    
                }
                
                
            }
        }
        return vec;
        
    }
    
    
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool vis[V]={0};
        
       vector<int> vec = bfs(0,adj,vis);
       
       return vec;
        
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends