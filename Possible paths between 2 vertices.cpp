#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    list<int> *adj;

  public:
    Graph(int V);
    void addEdge(int u, int v);
    int countPaths(int s, int d);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V + 1];
}

void Graph::addEdge(int u, int v) {
    adj[u].push_back(v);
}

// Position this line where user code will be pasted.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        int u, v;
        Graph g(N);
        while (M--) {
            cin >> u >> v;
            g.addEdge(u, v);
        }
        int s, e;
        cin >> s >> e;
        cout << g.countPaths(s, e) << endl;
    }
    return 0;
}// } Driver Code Ends


// The Graph structure is as folows
/*
class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V);
    void addEdge(int u, int v);
    int countPaths(int s, int d);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V+1];
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
}
*/

// Function to find paths between 2 nodes
void dfs(int s,bool vis[],int &c,int x1,list<int >adj[])
 {
     vis[s]=true;
     if(s==x1)
      c++;
     else
       {
        for(int x:adj[s])
          if(vis[x]==false)
            dfs(x,vis,c,x1,adj);
            
       }
    vis[s]=false;   
 }

int Graph::countPaths(int s, int d) {
    int c=0;
  bool vis[V];
  for(int i=0;i<V;i++)
    vis[i]=false; 
  dfs(s,vis,c,d,adj);
    return c; 
}
