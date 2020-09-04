#include<bits/stdc++.h>
using namespace std;

void dijkstra(vector<vector<int>> , int ,int );


int main()
{
    int t;
    int V;
    cin>>t;
    while(t--){
        cin>>V;
        
        vector<vector<int>> g(V);
        
        for(int i = 0;i<V;i++){
            vector<int> temp(V);
            g[i] = temp;
        }
        
        for(int i=0;i<V;i++)
        {
      	    for(int j=0;j<V;j++)
      	    {
      		    cin>>g[i][j];
      	    }
        }
        
        int s;
        cin>>s;
        
        dijkstra(g, s, V);
        cout<<endl;
       }
        return 0;
}// } Driver Code Ends


/*  Function to implement Dijkstra
*   graph: vector of vectors which represents the graph
*   src: source vertex to start traversing graph with
*   V: number of vertices
*/
void dijkstra(vector<vector<int>> graph, int src, int V)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dis(V,INT_MAX);
    bool visited[V]={false};
    pq.push({0,src});
    dis[src]=0;
    
    while(!pq.empty())
    {
        pair<int,int> p=pq.top();
        pq.pop();
        int u=p.second;
        if(visited[u]==true) continue;
        visited[u]=true;
        for(int i=0;i<V;i++)
        {
            if(graph[u][i]!=0)
            {
                int v=i;
                int wt=graph[u][i];
                if(dis[v]>dis[u]+wt)
                {
                    dis[v]=dis[u]+wt;
                    pq.push({dis[v],v});
                }
            }
        }
    }
    for(int i=0;i<V;i++)
        cout<<dis[i]<<" ";
}
