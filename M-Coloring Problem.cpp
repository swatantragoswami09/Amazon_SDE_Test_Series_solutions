#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

bool isSafe (int v, bool graph[101][101], int V, int color[], int c) 
{ 
	for (int i = 0; i < V; i++) 
		if (graph[v][i] && c == color[i]) 
			return false; 
	return true; 
} 
bool graphColoringUtil(bool graph[101][101], int V , int m, int color[], int v) 
{ 
	if (v == V) 
		return true; 
	for (int c = 1; c <= m; c++) 
	{ 
		if (isSafe(v, graph, V, color, c)) 
		{ 
			color[v] = c; 
			if (graphColoringUtil (graph,V, m, color, v+1) == true) 
				return true; 
			color[v] = 0; 
		} 
	} 
	return false; 
}
bool graphColoring(bool graph[101][101], int m, int V) {
   int color[V]; 
	for (int i = 0; i < V; i++) 
		color[i] = 0; 
	if (graphColoringUtil(graph, V, m, color, 0) == false) 
	{ 
		return false; 
	} 
	return true;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
