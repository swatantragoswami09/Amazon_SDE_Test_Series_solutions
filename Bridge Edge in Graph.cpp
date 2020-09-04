//Initial template
#include<bits/stdc++.h>
using namespace std;
class Graph
{
	int V;
	list<int> *adj;
public:
	Graph(int V); 
	int addEdge(int v, int w);
	bool isBridge(int u, int v);
};
Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}
int Graph::addEdge(int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// Driver Program
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        int s,N;
        cin>>s>>N;
        Graph *g = new Graph(s);
        for(int i=0;i<N;i++)
        {
            int u,v;
            cin>>u>>v;
            g->addEdge(u,v);
        }
        int a,b;
        cin>>a>>b;
        
         if(g->isBridge(a, b))
            cout<<1<<endl;
        else
             cout<<0<<endl;
         }
}
// } Driver Code Ends


// your task is to complete this function


/*The structure of the class is as follows 
which contains an integer V denoting the no 
of vertices and a list of adjacency vertices.
class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isBridge();
};*/
void dfs(int i,list<int> adj[],bool*visited)
{
    visited[i] = true;
    for(list<int>::iterator it=adj[i].begin();it!=adj[i].end();it++)
    {
        if(!visited[*it])
        dfs(*it,adj,visited);
    }
}
bool Graph::isBridge(int u, int v )
{
  //Code here
   int total = 0;
   bool visited[V];
   memset(visited,false,sizeof(visited));
   for(int i=0;i<V;i++)
   {
       if(!visited[i])
       {
           dfs(i,adj,visited);
           total++;
       }
   }
   for(list<int>::iterator it=adj[u].begin();it!=adj[u].end();it++)
   {
       if(*it==v)
       {
           adj[u].erase(it);
           break;
       }
   }
    for(list<int>::iterator it=adj[v].begin();it!=adj[v].end();it++)
   {
       if(*it==u)
       {
           adj[v].erase(it);
           break;
       }
   }
   int totalafter = 0;
   memset(visited,false,sizeof(visited));
   for(int i=0;i<V;i++)
   {
       if(!visited[i])
       {
           dfs(i,adj,visited);
           totalafter++;
       }
   }
   if(total==totalafter) return false;
   else return true;
}
