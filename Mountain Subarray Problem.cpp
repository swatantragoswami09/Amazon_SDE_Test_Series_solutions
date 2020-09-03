
using namespace std;

vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries,
                            int q);

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, i, q;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> q;
        vector<pair<int, int>> queries(q);
        for (i = 0; i < q; i++) {
            cin >> queries[i].first >> queries[i].second;
        }
        auto v = processQueries(a, n, queries, q);
        for (bool u : v) {
            cout << (u ? "Yes\n" : "No\n");
        }
    }
    return 0;
}// } Driver Code Ends


vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries,
                            int q) {
    int i,ind=0;
    vector<bool> v;
    int left[n],right[n];
    left[0]=0,right[n-1]=n-1;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1]) ind=i;
        left[i]=ind;
    }
    ind=n-1;
    for(i=n-2;i>=0;i--)
    {
        if(a[i]>a[i+1]) ind=i;
        right[i]=ind;
    }
    for(i=0;i<q;i++)
    {
        pair<int,int> p=queries[i];
        if(right[p.first]>=left[p.second]) v.push_back(1);
        else v.push_back(0);
    }
    return v;
}
