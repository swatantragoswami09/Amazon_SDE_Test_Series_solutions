#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/
bool DFSRec(vector<int> adj[],int s,bool vis[],int parent)
{
    vis[s]=1;
    vector<int>::iterator i;
    for( i=adj[s].begin();i!=adj[s].end();i++)
    {
        if(!vis[*i]){
            if(DFSRec(adj,*i,vis,s))
                return 1;
        }
        else if(*i!=parent) return 1;
                
    }
    return 0;
}
bool isCyclic(vector<int> adj[], int v)
{
    bool vis[v];
    for(int i=0;i<v;i++)
        vis[i]=0;
    for(int i=0;i<v;i++)
       { if(vis[i]==0)
            {
                if(DFSRec(adj,i,vis,-1))
                return 1;
            }
       }
    return 0;
    
   
}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
  // } Driver Code Ends
