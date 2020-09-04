#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to do DFS of graph
*  g[]: array of vectors to represent graph
*  vis[]: array to keep track of visited vertex
*/
// void DFSrec(vector<int> g,int s,bool vis[])
// {
//     vis[s]=true;
//     cout<<s<<" ";
//     for(int u: g[s])
//     {
//         if(vis[u]==false)
//             DFSrec(g,u,vis);
//     }
    
// }
void dfs(int s, vector<int> g[], bool vis[])
{
    vis[s]=true;
    cout<<s<<" ";
    vector<int>::iterator i;
    for(i=g[s].begin();i!=g[s].end();++i)
    {
        if(!vis[*i])
        dfs(*i,g,vis);
    }
    

}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        dfs(0,g,vis);
        
        cout<<endl;

    }
}  // } Driver Code Ends
