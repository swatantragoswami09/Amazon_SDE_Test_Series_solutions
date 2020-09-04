#include <bits/stdc++.h>

using namespace std;

int *topoSort(int N, vector<int> adj[]);

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
bool check(int V, int res[], vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return false;
        }
    }
    return true;
}

// Driver Code
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        int *res = topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
}// } Driver Code Ends


// The Graph structure is as folows

/*  Function which sorts the graph vertices in topological form
*   N: number of vertices
*   adj[]: input graph
*   NOTE: You must return dynamically allocated array
*/
int* topoSort(int N, vector<int> graph[]) 
{
    int y=0;
    int *arr = new int[N];
   vector<int> in(N);
   queue<int>Q;
   
   for(int i = 0;i<N;i++)
   {
       in[i] = 0;
   }
   vector<int>::iterator it;
   for(int i = 0;i<N;i++)
   {
       for(it = graph[i].begin();it!=graph[i].end();it++)
       {
           in[*it]++;
       }
   }
   
   for(int i = 0;i<N;i++)
   {
       if(in[i]==0)
            Q.push(i);
   }
   
   while(!Q.empty())
   {
       int i =  Q.front();
       vector<int>::iterator it;
       for(it = graph[i].begin();it!=graph[i].end();it++)
       {
           in[*it]--;
           if(in[*it] == 0)
           {
               Q.push(*it);
           }
        }
       
       arr[y++] = Q.front();
       Q.pop();
       
   }
    return arr;
}
