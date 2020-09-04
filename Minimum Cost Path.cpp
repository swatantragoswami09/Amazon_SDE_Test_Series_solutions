#include<bits/stdc++.h>
using namespace std;


int main() {
	int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n][n],dist[n][n];
        for (int i=0; i<n; i++)  
        {
           for (int j=0; j<n; j++) cin>>arr[i][j];
        }
        for (int i=0; i<n; i++)  
        {
           for (int j=0; j<n; j++) dist[i][j] = INT_MAX;
        }
        queue<pair<int,int> > q; 
        q.push(make_pair(0,0));
        dist[0][0] = arr[0][0];
        int res = INT_MAX;
        while (q.empty()==false)
        {
            pair<int,int> temp = q.front();
            q.pop();
            int a=temp.first,b=temp.second;
            if (a==n-1 && b==n-1) res=min(res,dist[a][b]);
            int dx[] = {-1,0,1,0};
            int dy[] = {0,1,0,-1};
            for (int i=0; i<4; i++)
            {
                int u=a+dx[i],v=b+dy[i];
                if (u>=0 && v>=0 && u<n && v<n)
                {
                    if (dist[u][v] > dist[a][b]+arr[u][v])
                    {
                        dist[u][v] = dist[a][b]+arr[u][v];
                        q.push(make_pair(u,v));
                    }
                }
            }
        }
        if (res!=INT_MAX) cout<<res<<"\n";
        else cout<<"-1\n";
    }
	return 0;
}
