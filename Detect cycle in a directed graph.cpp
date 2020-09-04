#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/
bool DFS(int s,vector<int> *adj,bool vis[],bool S[])
{
    if(vis[s]==0)
    {
        vis[s]=1;
        S[s]=1;
        vector<int >:: iterator it;
        for(it=adj[s].begin();it!=adj[s].end();it++)
        {
            if(!vis[*it] && DFS(*it,adj,vis,S))
                return true;
            if(S[*it]) return true;
        }
        S[s]=false;
        return false;
    }
}
bool isCyclic(int V, vector<int> adj[])
{
    bool vis[V];
    bool s[V];
    // memset(vis,false,sizeof,vis);
    // memset(s,false,sizeof,s);
    for(int i=0;i<V;i++)
       { vis[i]=false;
        s[i]=false;
       }
    for(int i=0;i<V;i++)
    {
        if(DFS(i,adj,vis,s)) return 1;
        
    }
    return 0;
    
}

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
